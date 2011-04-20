#include "wx/wx.h"
#include "mainframe.h"
#include <iostream>
#include <fstream>

//Create a myapp class from wxapp
class MyApp: public wxApp
{
    virtual bool OnInit();
};

//Create a frame object from myframe1
bool MyApp::OnInit()
{
    MainFrame *frame = new MainFrame(NULL );
    frame->Show(true);
    SetTopWindow(frame);
	
	frame->SetIcon(wxIcon(wxString("docs") + wxFileName::GetPathSeparator() + wxString("img") + wxFileName::GetPathSeparator() + "icon.ico", wxBITMAP_TYPE_ICO, -1, -1));

	// Main.cpp

    return true;
}

//Start app
IMPLEMENT_APP(MyApp)
