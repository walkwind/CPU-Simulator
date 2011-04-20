#ifndef __IM_H_INCLUDED__
#define __IM_H_INCLUDED__

#include <iostream>
#include <fstream>
#include <string>
#include <limits>
#include <vector>
#include <math.h>
class MainFrame;

using namespace std;

class InstructionMemory {
private:
	vector<string> instmem;
	string intToBinary(int num);
public:
	string fetch(int pc);
	int size();
	void decode(string filename, MainFrame* theFrame);
	
	friend class ControlUnit;
};

#endif 


