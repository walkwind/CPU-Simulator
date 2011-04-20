#ifndef __DM_H_INCLUDED__
#define __DM_H_INCLUDED__

#include <iostream>
#include <fstream>
#include <string>
#include <limits>
#include <vector>
class MainFrame;

using namespace std;

class DataMemory {
private:
	vector<string> datamem;
	string IntToBinary(int num);
public:
	DataMemory();
	void store(string value, int index, MainFrame* theFrame);
	string get(int index);

	//filename should include the extension .txt
	void decode(string filename, MainFrame* theFrame);
	void writeToFile(string filename);

	friend class ALU;
	friend class ControlUnit;
};

#endif 