#include "controlUnit.h"
#include "MainFrame.h"

#pragma warning(disable: 4996) 
// Functions

ControlUnit::ControlUnit()
{
   pc = 0;
};

// Overloaded constructor
         

// Mutator member functions
void ControlUnit::setPC(int point)
{
	pc = point;
};

// Member functions
int ControlUnit::getPC() const
{
     return pc;
};

// This function loads from DM to Register
void ControlUnit::LW(int registerIndex, int dataIndex, DataMemory &da1, Register &r1, MainFrame* theFrame)
{
	theFrame->OnDelay(1);
	string dataVal = da1.get(dataIndex); 
	r1.storeCU(dataVal, registerIndex, theFrame); // Store in Register Index
	pc++;
};

// This function saves from Register to DM
void ControlUnit::SW(int registerIndex, int dataIndex, DataMemory &da1, Register &r1, MainFrame* theFrame)
{
	theFrame->OnDelay(1);
	string regVal = r1.get(registerIndex); 
	da1.store(regVal, dataIndex, theFrame); // Store Register value into DM
	pc++;
};

// This function changes the PC
void ControlUnit::JMP(int newPC, MainFrame* theFrame)
{
	setPC(newPC);
};

//This function does a branch on equal
void ControlUnit::BEQ(int a, int b, int newPC, Register &r1, MainFrame* theFrame)
{
	if(r1.get(a)==r1.get(b))
	{
		cout<<"BEQ jumping."<<endl;
		setPC(newPC);
	}
	else
		pc++;
};
// This function initializes the Control Unit
void ControlUnit::initialize(DataMemory &da1, Register &r1, ControlUnit &cu, InstructionMemory &im1, ALU &a1, MainFrame* theFrame)
{
	while (cu.getPC() < im1.size())
	{
	  // Control Unit initialize
		int count = cu.getPC();
		stringstream ss;//create a stringstream
		ss << count;//add number to the stream
		string temp1 = ss.str();//return a string with the contents of the stream
		theFrame->OnCuProgramCount( temp1 );
		string binary = im1.fetch(cu.getPC());
	  // Send to ALU
		if (binary[0] == '0')
		{
		  if (binary.substr(0, 6) == "000001")
		  {
			  // ADD operator
			  a1.add(binary,r1, theFrame);
			  cu.setPC(cu.getPC()+1);
		  }
		  if (binary.substr(0, 6) == "000010")
		  {
			  // SUB operator
			  a1.sub(binary,r1, theFrame);
			  cu.setPC(cu.getPC()+1);
		  }
		  if (binary.substr(0, 6) == "000011")
		  {
			  // MULTI operator
			  a1.multi(binary,r1, theFrame);
			  cu.setPC(cu.getPC()+1);
		  }
		  if (binary.substr(0, 6) == "000100")
		  {
			  // DIV operator
			  a1.div(binary,r1, theFrame);
			  cu.setPC(cu.getPC()+1);
		  }
		  if(binary.substr(0,6)== "000101")
		  {
			  // OR operator
			  a1.or(binary,r1, theFrame);
			  cu.setPC(cu.getPC()+1);
		  }
		  if(binary.substr(0,6)=="000110")
		  {
			  // AND operator
			  a1.and(binary,r1, theFrame);
			  cu.setPC(cu.getPC()+1);
		  }
	  }

	  // Keep in Control Unit
	  else if(binary[0] == '1')
	  {
			  // Load, save, jump, or beq operator
			  cu.decode(binary, cu, da1, r1, theFrame);
	  }

	}
};

void ControlUnit::decode(string &b, ControlUnit &cu, DataMemory &da1, Register &r1, MainFrame* theFrame)
{
	// Decode each sub-string
	int dec1 =  (strtol(b.substr(0, 6).c_str(), NULL, 2) - 32);
	int dec2 =  strtol(b.substr(6, 6).c_str(), NULL, 2);
	int dec3 =  strtol(b.substr(12, 6).c_str(), NULL, 2);
	int dec4 =  strtol(b.substr(18, 6).c_str(), NULL, 2);
	int dec5 =  strtol(b.substr(24, 6).c_str(), NULL, 2);
	int dec6 =  strtol(b.substr(30, 2).c_str(), NULL, 2);
    
	//cout << dec1 << " " << dec2 << " " << dec3 << endl;
	//cout << dec4 << " " << dec5 << " " << dec6 << endl;
	if (dec1 == 1){
		string temp1 = "Control Unit is performing LW";
		theFrame->OnCuInitialize(temp1);
		cu.LW(dec2, dec3, da1, r1, theFrame); // Load Function
	}
	else if (dec1 == 2){
		string temp1 = "Control Unit is performing SW";
		theFrame->OnCuInitialize(temp1);
		cu.SW(dec2, dec3, da1, r1, theFrame); // Save Function
	}
	else if (dec1 == 3){
		string temp1 = "Control Unit is performing JMP";
		theFrame->OnCuInitialize(temp1);
		cu.JMP(dec2, theFrame); // Jump Function
	}
	else if (dec1 == 4){// BEQ Function
		string temp1 = "Control Unit is performing BEQ";
		theFrame->OnCuInitialize(temp1);
		cu.BEQ(dec2, dec3, dec4, r1, theFrame);
	}
		
};