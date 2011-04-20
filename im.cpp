#include "im.h"
#include "MainFrame.h"

#pragma warning(disable: 4996) 
// Functions

	string InstructionMemory::intToBinary(int num)
	{
		string result;
		for(int i =1; i<=6; i++)
			if(num/pow(2.0,6-i)>=1)
			{
				result+='1';
				num=num-(int)pow(2.0,6-i);
			}
			else
				result+='0';
		return result;
	};

	string InstructionMemory::fetch(int pc)
	{
		return instmem[pc];
	};

	int InstructionMemory::size()
	{
		return instmem.size();
	};
	void InstructionMemory::decode(string filename, MainFrame* theFrame)
	{
		ifstream file;
		file.open(filename.c_str());
		string tempstring;
		int tempInt, numArgs;
		while(file.good())
		{
			file >> tempstring;
			if(tempstring=="ADD")
			{
				instmem.push_back("000001");
				numArgs=3;
			}
			else if (tempstring=="SUB")
			{
				instmem.push_back("000010");
				numArgs=3;
			}
			else if (tempstring=="MULTI")
			{
				instmem.push_back("000011");
				numArgs=3;
			}
			else if (tempstring=="DIV")
			{
				instmem.push_back("000100");
				numArgs=3;
			}
			else if (tempstring== "LW")
			{
				instmem.push_back("100001");
				numArgs=2;
			}
			else if (tempstring =="SW")
			{
				instmem.push_back("100010");
				numArgs=2;
			}
			else if (tempstring== "JMP")
			{
				instmem.push_back("100011");
				numArgs=1;
			}
			else if (tempstring== "BEQ")
			{
				instmem.push_back("100100");
				numArgs=3;
			}
			else if (tempstring== "OR")
			{
				instmem.push_back("000101");
				numArgs=3;
			}
			else if (tempstring=="AND")
			{
				instmem.push_back("000110");
				numArgs=3;
			}
			else
			{
				numArgs=0;
				cout<<"Error reading file."<<endl;
			}
			for(int i=0; i<numArgs; i++)
			{
				file>>tempstring;
				if(tempstring[0]=='R'||tempstring[0]=='D')
					tempstring[0]='0';
				tempInt=atoi(tempstring.c_str());
				instmem.back()+=intToBinary(tempInt);
			}
			while(instmem.back().length()<32)
				instmem.back()+='0';
			string temp1 = instmem.back();
			theFrame->OnImLoadDecode(temp1);
			//cout<<"Instmem: "<<instmem.back()<<endl;
		}
		file.close();
	};