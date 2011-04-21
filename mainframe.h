#ifndef __mainframe__
#define __mainframe__

/**
@file
Subclass of GUI_MainFrame, which is generated by wxFormBuilder.
*/

#include "GUI.h"
#include <wx/msgdlg.h>
#include <wx/filename.h>
#include <string>
#include "im.h"
#include "dm.h"
#include "register.h"
#include "controlUnit.h"
#include "ALU.h"
#include "thread.h"
#include <windows.h>


//// end generated include

/** Implementing GUI_MainFrame */
class MainFrame : public GUI_MainFrame
{
public:
	InstructionMemory im; // member variable
	ControlUnit cu;
	Register reg;
	DataMemory dm;
	ALU alu;
	bool de;
	protected:
		// Handlers for GUI_MainFrame events.
		void OnALUReset( wxCommandEvent& event );
		void OnControlUnitReset( wxCommandEvent& event );
		void OnQuit( wxCommandEvent& event );
		void OnAbout( wxCommandEvent& event );
		void OnOpen( wxCommandEvent& event );
		void OnStart( wxCommandEvent& event );
		void OnStart2();
		void OnPause( wxCommandEvent& event );
		void OnStop( wxCommandEvent& event );
		void OnStatusReset( wxCommandEvent& event );
		void OnImLoad( wxCommandEvent& event );
		void OnImLoad2();
		void OnImReset( wxCommandEvent& event );
		void OnDataLoad( wxCommandEvent& event );
		void OnDataLoad2();
		void OnDataReset( wxCommandEvent& event );
		void OnRegisterReset( wxCommandEvent& event );
		void OnMenuClearAll( wxCommandEvent& event );
		void OnNormalSpeed( wxCommandEvent& event );
		void OnDemoSpeed( wxCommandEvent& event );
		void OnDMLS( wxCommandEvent& event );
	public:
		/** Constructor */
		MainFrame( wxWindow* parent );
		
		void OnDelay(int t);
		void OnImLoadDecode( const wxString &string );
		void OnDmLoadDecode( const wxString &string );
		void OnCuInitialize( const wxString &string );
		void OnCuProgramCount( const wxString &string );
		void OnCuALU( const wxString &string, const wxString &binary );
		void OnCuDataMem( const wxString &string, const wxString &binary );
		void OnAluRegister( const wxString &string, const wxString &binary );
		
		CPUThread *cpu;
		// creates a new thread (but doesn't run it)
		CPUThread *CreateThread();
	//// end generated class members
};

#endif // __mainframe__
