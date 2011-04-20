#ifndef __ALU_H_INCLUDED__
#define __ALU_H_INCLUDED__

#include <iostream>
#include "register.h"
#include <string>
class MainFrame;

using namespace std;

class ALU {
public:
	void add (string &a,Register &r1, MainFrame* theFrame);
	void or (string a,Register &r1, MainFrame* theFrame);
	void and (string a,Register &r1, MainFrame* theFrame);
	void sub (string a,Register &r1, MainFrame* theFrame);
	void multi (string a,Register &r1, MainFrame* theFrame);
	void div (string a,Register &r1, MainFrame* theFrame);

	string IntToBinary(int num);

	friend class ControlUnit;
	friend class Register;
};

#endif 