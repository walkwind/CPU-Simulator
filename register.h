#ifndef __REGISTER_H_INCLUDED__
#define __REGISTER_H_INCLUDED__

#include <string>
#include <iostream>
#include <vector>
class MainFrame;

using namespace std;

class Register {
private:
	vector<string> reg;
public:
	Register();
	void store(string value, int index, MainFrame* theFrame);
	void storeCU(string value, int index, MainFrame* theFrame);
	string get(int index);

	friend class ALU;
	friend class ControlUnit;
};

#endif 