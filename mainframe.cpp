#include "mainframe.h"

MainFrame::MainFrame( wxWindow* parent )
:
GUI_MainFrame( parent )
{

}

void MainFrame::OnQuit( wxCommandEvent& event )
{
	Close();
}

void MainFrame::OnDelay(int t)
{
	clock_t endwait;
	while (pa == true) {};
	if (de)
	{
		endwait = clock () + t * CLK_TCK ;
		while (clock()<endwait)
		{
		}
	};
}

void MainFrame::OnAbout( wxCommandEvent& event )
{
	wxMessageBox(wxString::Format
                 ("Team Gateway with welcomes you! \nThis application is the simulation of a"
				 " CPU using a Graphical User Interface (GUI)\n\nUnder the hood: %s%s, ",
                    wxVERSION_STRING,
                    wxGetOsDescription()),
                 "About CPU Simulator",
                 wxOK | wxICON_INFORMATION,
                 this);
}

void MainFrame::OnOpen( wxCommandEvent& event )
{
	wxLaunchDefaultBrowser(wxString("docs") + wxFileName::GetPathSeparator() + "hello.html");
}

void MainFrame::OnStart( wxCommandEvent& event )
{
	pa=false;
	m_listBox41->Select(m_listBox41->Append("The CPU has started"));

	// GIF animation
	m_animCtrl1->LoadFile(wxString("docs") + wxFileName::GetPathSeparator() + wxString("img") + wxFileName::GetPathSeparator() + "left_right.gif");
	m_animCtrl1->Play();

	// This will call the Control Unit initialize function
	OnStart2();
}

void MainFrame::OnStart2()
{
	cu.initialize(this->dm,this->reg,this->cu,this->im,this->alu, this);
}

void MainFrame::OnCuInitialize( const wxString &string )
{
	m_listBox42->Select(m_listBox42->Append(string));	
}

void MainFrame::OnCuProgramCount( const wxString &string )
{
	m_listBox421->Select(m_listBox421->Append(string));	
}

void MainFrame::OnPause( wxCommandEvent& event )
{
	pa=true;
	m_listBox41->Select(m_listBox41->Append("The CPU is paused"));
}

void MainFrame::OnStop( wxCommandEvent& event )
{
	m_listBox41->Select(m_listBox41->Append("The CPU has stopped"));

	// Stop everything
	m_animCtrl1->Stop();
	m_animCtrl1->Hide();
}

void MainFrame::OnStatusReset( wxCommandEvent& event )
{
	m_listBox41->Clear();
}

void MainFrame::OnImLoad( wxCommandEvent& event )
{
	m_listBox41->Select(m_listBox41->Append("Load Instructions to instruction array"));
	OnImLoad2();
}

void MainFrame::OnImLoad2()
{
	this->im.decode("TextFile1.txt", this);
}
void MainFrame::OnImLoadDecode( const wxString &string )
{
	m_listBox3->Select(m_listBox3->Append(string));	
}

void MainFrame::OnALUReset( wxCommandEvent& event )
{
	m_listBox41->Select(m_listBox41->Append("ALU Listbox reset"));
	m_listBox21->Clear();
}

void MainFrame::OnCuALU( const wxString &string, const wxString &binary )
{
	m_listBox21->Select(m_listBox21->Append(binary));	
	m_listBox41->Select(m_listBox41->Append(string));
	m_listBox41->Select(m_listBox41->Append(binary));
}

void MainFrame::OnCuDataMem( const wxString &string, const wxString &binary )
{
	m_listBox2->Select(m_listBox2->Append(binary));	
	m_listBox41->Select(m_listBox41->Append(string));
}

void MainFrame::OnControlUnitReset( wxCommandEvent& event )
{
	m_listBox41->Select(m_listBox41->Append("Control Unit Listbox and Program Count Listbox reset"));
	m_listBox42->Clear();
	m_listBox421->Clear();
	m_listBox421->Append("PC:");
}

void MainFrame::OnImReset( wxCommandEvent& event )
{
	m_listBox41->Select(m_listBox41->Append("Instruction Memory Listbox reset"));
	m_listBox3->Clear();
}

void MainFrame::OnDataLoad( wxCommandEvent& event )
{
	m_listBox41->Select(m_listBox41->Append("Load values to data memory"));
	OnDataLoad2();
}

void MainFrame::OnDataLoad2( )
{
	this->dm.decode("TextFile2.txt", this);
}

void MainFrame::OnDmLoadDecode( const wxString &string )
{
	m_listBox2->Select(m_listBox2->Append(string));	
}

void MainFrame::OnDataReset( wxCommandEvent& event )
{
	m_listBox41->Select(m_listBox41->Append("Data memory Listbox reset"));
	m_listBox4->Clear();
}

void MainFrame::OnRegisterReset( wxCommandEvent& event )
{
	m_listBox41->Select(m_listBox41->Append("Register Listbox reset"));
	m_listBox4->Clear();
}

void MainFrame::OnAluRegister( const wxString &string, const wxString &binary )
{
	m_listBox4->Select(m_listBox4->Append(binary));	
	m_listBox41->Select(m_listBox41->Append(string));
	m_listBox41->Select(m_listBox41->Append(binary));
}

void MainFrame::OnMenuClearAll( wxCommandEvent& event )
{
	m_listBox41->Clear();
	m_listBox42->Clear();
	m_listBox4->Clear();
	m_listBox3->Clear();
	m_listBox2->Clear();
	m_listBox21->Clear();
	m_listBox421->Clear();
	m_listBox421->Append("PC:");
}

void MainFrame::OnNormalSpeed( wxCommandEvent& event )
{
	de=false;
	m_listBox41->Select(m_listBox41->Append("The CPU is running at normal speed"));
}

void MainFrame::OnDemoSpeed( wxCommandEvent& event )
{
	de=true;
	m_listBox41->Select(m_listBox41->Append("The CPU is running at demo speed"));
}
