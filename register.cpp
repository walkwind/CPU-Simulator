#include "register.h"
#include "MainFrame.h"


// Functions

	Register::Register()
	{
		for (int i=1;i<=32;i++)	
			reg.push_back("000000");
	};

	void Register::store(string value, int index, MainFrame* theFrame)
	{
		theFrame->OnDelay(1);
		reg.at(index) = value;

		string temp1 = "You have sent the 32-bit string below from the Data Memory to the Register:";
		theFrame->OnAluRegister(temp1, value);
	};

	void Register::storeCU(string value, int index, MainFrame* theFrame)
	{
		theFrame->OnDelay(1);
		reg[index] = value;

		string temp1 = "You have Loaded from Data Memory to Register:";
		theFrame->OnAluRegister(temp1, value); // Value showing up wrong
	};

	string Register::get(int index)
	{
		return reg[index];
	};