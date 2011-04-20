#include "dm.h"
#include "mainframe.h"

#pragma warning(disable: 4996) 
// functions

string DataMemory::IntToBinary(int num)
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

	DataMemory::DataMemory()
	{
		for (int i=1;i<=32;i++)
			datamem.push_back("000000");
	}
	
	void DataMemory::store(string value, int index, MainFrame* theFrame)
	{
		theFrame->OnDelay(1);
		datamem.at(index) = value;

		string temp1 = "You have Stored from Register to Data Memory:";
		theFrame->OnCuDataMem(temp1, value);
	};

	string DataMemory::get(int index)
	{
		return datamem[index];
	};
	
	//filename should include the extension .txt
	void DataMemory::decode(string filename, MainFrame* theFrame)
	{
		ifstream file;
		file.open(filename.c_str());
		string tempString;
		int co=0;
		while(file.good())
		{
			
			file >> tempString;
			datamem.at(co)=IntToBinary(strtol(tempString.c_str(), NULL, 10));
			// Send to MainFrame
			theFrame->OnDmLoadDecode(datamem.at(co));
			co++;
		}
		file.close();
	};
	
	void DataMemory::writeToFile(string filename)
	{
		ofstream file;
		string temp = "";
		file.open(filename.c_str());
		for(int i=0; i<32; i++)
		{
			temp = datamem[i] + ' ';
			file << temp.c_str();
		}
		file.close();
	};