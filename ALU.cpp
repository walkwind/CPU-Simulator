#include "ALU.h"
#include "MainFrame.h"

#pragma warning(disable: 4996) 

// Functions

string ALU::IntToBinary(int num)
	{
		string result;
		for(int i =1; i<=32; i++)
			if(num/pow(2.0,32-i)>=1)
			{
				result+='1';
				num=num-(int)pow(2.0,32-i);
			}
			else
				result+='0';
		return result;
	};

void ALU::add (string &a,Register &r1, MainFrame* theFrame){
	theFrame->OnDelay(1);
	string temp1 = "Control Unit is performing ADD";
	theFrame->OnCuInitialize(temp1);
	string temp2 = "You have sent the 32-bit string below to be decoded at the ALU:";
	theFrame->OnCuALU(temp2, a);

	string reg1 =  r1.get(strtol(a.substr(6, 6).c_str(), NULL, 2));
	string reg2 =  r1.get(strtol(a.substr(12, 6).c_str(), NULL, 2));
	int reg3 =  strtol(reg1.c_str(), NULL, 2)+strtol(reg2.c_str(), NULL, 2);
	string temp3 = IntToBinary(reg3);
	int reg4 = strtol(a.substr(18, 6).c_str(), NULL, 2);
	r1.store(temp3, reg4, theFrame);
	//r1.reg.at(strtol(a.substr(18, 6).c_str(), NULL, 2)) = IntToBinary(reg3);
};

void ALU::or (string &a,Register &r1, MainFrame* theFrame){
	theFrame->OnDelay(1);
	string temp1 = "Control Unit is performing OR";
	theFrame->OnCuInitialize(temp1);
	string temp2 = "You have sent the 32-bit string below to be decoded at the ALU:";
	theFrame->OnCuALU(temp2, a);

	string temp=a;
	for (int i=1;i<32;i++)
	{
	};
	};

void ALU::and (string &a,Register &r1, MainFrame* theFrame){
	theFrame->OnDelay(1);
	string temp1 = "Control Unit is performing AND";
	theFrame->OnCuInitialize(temp1);
	string temp2 = "You have sent the 32-bit string below to be decoded at the ALU:";
	theFrame->OnCuALU(temp2, a);
	};

void ALU::sub (string &a,Register &r1, MainFrame* theFrame){
	theFrame->OnDelay(1);
	string temp1 = "Control Unit is performing SUB";
	theFrame->OnCuInitialize(temp1);
	string temp2 = "You have sent the 32-bit string below to be decoded at the ALU:";
	theFrame->OnCuALU(temp2, a);

	string reg1 =  r1.get(strtol(a.substr(6, 6).c_str(), NULL, 2));
	string reg2 =  r1.get(strtol(a.substr(12, 6).c_str(), NULL, 2));
	int reg3 =  strtol(reg1.c_str(), NULL, 2)-strtol(reg2.c_str(), NULL, 2);
	r1.reg.at(strtol(a.substr(18, 6).c_str(), NULL, 2)) = IntToBinary(reg3);
	};

void ALU::multi (string &a,Register &r1, MainFrame* theFrame){
	theFrame->OnDelay(1);
	string temp1 = "Control Unit is performing MULTI";
	theFrame->OnCuInitialize(temp1);
	string temp2 = "You have sent the 32-bit string below to be decoded at the ALU:";
	theFrame->OnCuALU(temp2, a);

	string reg1 =  r1.get(strtol(a.substr(6, 6).c_str(), NULL, 2));
	string reg2 =  r1.get(strtol(a.substr(12, 6).c_str(), NULL, 2));
	int reg3 =  strtol(reg1.c_str(), NULL, 2)*strtol(reg2.c_str(), NULL, 2);
	r1.reg.at(strtol(a.substr(18, 6).c_str(), NULL, 2)) = IntToBinary(reg3);
	};

void ALU::div (string &a,Register &r1, MainFrame* theFrame){
	theFrame->OnDelay(1);
	string temp1 = "Control Unit is performing DIV";
	theFrame->OnCuInitialize(temp1);
	string temp2 = "You have sent the 32-bit string below to be decoded at the ALU:";
	theFrame->OnCuALU(temp2, a);

	string reg1 =  r1.get(strtol(a.substr(6, 6).c_str(), NULL, 2));
	string reg2 =  r1.get(strtol(a.substr(12, 6).c_str(), NULL, 2));
	int reg3 =  strtol(reg1.c_str(), NULL, 2)/strtol(reg2.c_str(), NULL, 2);
	r1.reg.at(strtol(a.substr(18, 6).c_str(), NULL, 2)) = IntToBinary(reg3);
	};   