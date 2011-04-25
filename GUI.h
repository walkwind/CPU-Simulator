///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Sep  8 2010)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __GUI__
#define __GUI__

#include <wx/string.h>
#include <wx/button.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/sizer.h>
#include <wx/listbox.h>
#include <wx/statbox.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/animate.h>
#include <wx/stattext.h>
#include <wx/menu.h>
#include <wx/statusbr.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class GUI_MainFrame
///////////////////////////////////////////////////////////////////////////////
class GUI_MainFrame : public wxFrame 
{
	private:
	
	protected:
		wxButton* m_button21;
		wxListBox* m_listBox21;
		wxButton* m_button6;
		wxListBox* m_listBox4;
		wxButton* m_button1;
		wxButton* m_button2;
		wxListBox* m_listBox2;
		wxAnimationCtrl* m_animCtrl1;
		wxButton* m_button61;
		wxButton* m_button7;
		wxButton* m_button12;
		wxButton* m_button8;
		wxListBox* m_listBox42;
		wxListBox* m_listBox421;
		wxButton* m_button62;
		wxAnimationCtrl* m_animCtrl2;
		wxListBox* m_listBox3;
		wxButton* m_button3;
		wxButton* m_button4;
		wxListBox* m_listBox41;
		wxButton* m_button9;
		wxStaticText* m_staticText1;
		wxListBox* m_listBox8;
		wxMenuBar* m_menubar2;
		wxMenu* m_menu1;
		wxMenu* m_menu21;
		wxMenu* m_menu5;
		wxMenu* m_menu11;
		wxMenu* m_menu2;
		wxStatusBar* m_statusBar1;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnALUReset( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnRegisterReset( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnDataOpen( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnDataReset( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnDMLS( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnStart( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnPause( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnResume( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnStop( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnControlUnitReset( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnImOpen( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnImReset( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnStatusReset( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnMenuClearAll( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnNormalSpeed( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnDemoSpeed( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnQuit( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnImLoad( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnDataLoad( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnAbout( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnOpen( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		GUI_MainFrame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Team Gateway - GUI CPU Simulator"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		~GUI_MainFrame();
	
};

#endif //__GUI__
