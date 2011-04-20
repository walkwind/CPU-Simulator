// ControlUnit.h
// Specification file for the Control Unit Class

#ifndef ControlUnit_H
#define ControlUnit_H

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <sstream>
#include "register.h"
#include "dm.h"
#include "im.h"
#include "ALU.h"
class MainFrame;

using namespace std;

class ControlUnit
{
 private:
 
	// Private member variables
	int pc;  // program counter

	// Private member function

 public:
	 // Default constructor
	ControlUnit();

	// Overloaded constructor
	         

	// Mutator member functions
	void setPC(int point);

	// Member functions
	int getPC() const;

	// This function loads from DM to Register
	void LW(int registerIndex, int dataIndex, DataMemory &da1, Register &r1, MainFrame* theFrame);

	// This function saves from Register to DM
	void SW(int registerIndex, int dataIndex, DataMemory &da1, Register &r1, MainFrame* theFrame);

	// This function changes the PC
	void JMP(int newPC, MainFrame* theFrame);

	//This function does a branch on equal
	void BEQ(int a, int b, int newPC, Register &r1, MainFrame* theFrame);

	// This function initializes the Control Unit
	void initialize(DataMemory &da1, Register &r1, ControlUnit &cu, InstructionMemory &im1, ALU &a1, MainFrame* theFrame);

	void decode(string &b, ControlUnit &cu, DataMemory &da1, Register &r1, MainFrame* theFrame);

	
};


#endif
