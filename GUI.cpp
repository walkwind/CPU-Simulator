///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Sep  8 2010)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "GUI.h"

///////////////////////////////////////////////////////////////////////////

GUI_MainFrame::GUI_MainFrame( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( 900,700 ), wxSize( 1000,730 ) );
	this->SetFont( wxFont( wxNORMAL_FONT->GetPointSize(), 70, 90, 92, false, wxEmptyString ) );
	this->SetBackgroundColour( wxColour( 127, 127, 127 ) );

	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* sbSizer11;
	sbSizer11 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("ALU") ), wxVERTICAL );
	
	wxBoxSizer* bSizer101;
	bSizer101 = new wxBoxSizer( wxVERTICAL );
	
	m_listBox21 = new wxListBox( this, wxID_ANY, wxDefaultPosition, wxSize( 240,80 ), 0, NULL, wxLB_ALWAYS_SB ); 
	bSizer101->Add( m_listBox21, 1, wxEXPAND, 5 );
	
	sbSizer11->Add( bSizer101, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer31;
	bSizer31 = new wxBoxSizer( wxHORIZONTAL );
	
	m_button21 = new wxButton( this, wxID_ANY, wxT("Reset"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer31->Add( m_button21, 0, wxALL, 5 );
	
	sbSizer11->Add( bSizer31, 0, wxEXPAND, 5 );
	
	bSizer12->Add( sbSizer11, 1, 0, 5 );
	
	wxBoxSizer* bSizer2711;
	bSizer2711 = new wxBoxSizer( wxVERTICAL );
	
	bSizer2711->SetMinSize( wxSize( 50,-1 ) ); 
	m_animCtrl1 = new wxAnimationCtrl( this, wxID_ANY, wxNullAnimation, wxDefaultPosition, wxSize( 50,-1 ), wxAC_DEFAULT_STYLE ); 
	m_animCtrl1->SetMaxSize( wxSize( 50,-1 ) );
	
	bSizer2711->Add( m_animCtrl1, 0, 0, 5 );
	
	bSizer12->Add( bSizer2711, 0, 0, 5 );
	
	wxStaticBoxSizer* sbSizer4;
	sbSizer4 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("Register Memory") ), wxVERTICAL );
	
	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxVERTICAL );
	
	bSizer8->SetMinSize( wxSize( 240,-1 ) ); 
	m_listBox4 = new wxListBox( this, wxID_ANY, wxDefaultPosition, wxSize( 240,80 ), 0, NULL, wxLB_ALWAYS_SB ); 
	bSizer8->Add( m_listBox4, 1, wxEXPAND, 5 );
	
	sbSizer4->Add( bSizer8, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer11;
	bSizer11 = new wxBoxSizer( wxHORIZONTAL );
	
	bSizer11->SetMinSize( wxSize( 200,-1 ) ); 
	m_button6 = new wxButton( this, wxID_ANY, wxT("Reset"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer11->Add( m_button6, 0, wxALL, 5 );
	
	sbSizer4->Add( bSizer11, 0, 0, 5 );
	
	bSizer12->Add( sbSizer4, 1, 0, 5 );
	
	wxBoxSizer* bSizer2712;
	bSizer2712 = new wxBoxSizer( wxVERTICAL );
	
	bSizer2712->SetMinSize( wxSize( 50,-1 ) ); 
	m_animCtrl2 = new wxAnimationCtrl( this, wxID_ANY, wxNullAnimation, wxDefaultPosition, wxDefaultSize, wxAC_DEFAULT_STYLE ); 
	bSizer2712->Add( m_animCtrl2, 0, 0, 5 );
	
	bSizer12->Add( bSizer2712, 0, wxEXPAND, 5 );
	
	wxStaticBoxSizer* sbSizer1;
	sbSizer1 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("Data Memory") ), wxVERTICAL );
	
	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxVERTICAL );
	
	bSizer10->SetMinSize( wxSize( 240,-1 ) ); 
	m_listBox2 = new wxListBox( this, wxID_ANY, wxDefaultPosition, wxSize( 250,80 ), 0, NULL, wxLB_ALWAYS_SB ); 
	bSizer10->Add( m_listBox2, 1, wxEXPAND, 5 );
	
	sbSizer1->Add( bSizer10, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxHORIZONTAL );
	
	m_button1 = new wxButton( this, wxID_ANY, wxT("Load Data"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer3->Add( m_button1, 0, wxALL, 5 );
	
	m_button2 = new wxButton( this, wxID_ANY, wxT("Reset"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer3->Add( m_button2, 0, wxALL, 5 );
	
	sbSizer1->Add( bSizer3, 0, wxEXPAND, 5 );
	
	bSizer12->Add( sbSizer1, 1, 0, 5 );
	
	bSizer5->Add( bSizer12, 0, 0, 5 );
	
	m_staticline10 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxSize( -1,50 ), wxLI_HORIZONTAL );
	bSizer5->Add( m_staticline10, 0, 0, 5 );
	
	wxBoxSizer* bSizer2713;
	bSizer2713 = new wxBoxSizer( wxVERTICAL );
	
	bSizer5->Add( bSizer2713, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer121;
	bSizer121 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizer27;
	bSizer27 = new wxBoxSizer( wxVERTICAL );
	
	bSizer27->SetMinSize( wxSize( 100,-1 ) ); 
	bSizer121->Add( bSizer27, 0, 0, 5 );
	
	wxStaticBoxSizer* sbSizer41;
	sbSizer41 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("Control Unit") ), wxVERTICAL );
	
	wxBoxSizer* bSizer81;
	bSizer81 = new wxBoxSizer( wxHORIZONTAL );
	
	m_listBox42 = new wxListBox( this, wxID_ANY, wxDefaultPosition, wxSize( 230,-1 ), 0, NULL, wxLB_ALWAYS_SB ); 
	bSizer81->Add( m_listBox42, 0, 0, 5 );
	
	wxBoxSizer* bSizer39;
	bSizer39 = new wxBoxSizer( wxVERTICAL );
	
	bSizer39->SetMinSize( wxSize( 25,-1 ) ); 
	bSizer81->Add( bSizer39, 0, 0, 5 );
	
	m_listBox421 = new wxListBox( this, wxID_ANY, wxDefaultPosition, wxSize( 80,-1 ), 0, NULL, wxLB_ALWAYS_SB );
	m_listBox421->Append( wxT("PC:") );
	bSizer81->Add( m_listBox421, 0, 0, 5 );
	
	sbSizer41->Add( bSizer81, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer111;
	bSizer111 = new wxBoxSizer( wxHORIZONTAL );
	
	bSizer111->SetMinSize( wxSize( 200,-1 ) ); 
	m_button62 = new wxButton( this, wxID_ANY, wxT("Reset"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer111->Add( m_button62, 0, wxALL, 5 );
	
	sbSizer41->Add( bSizer111, 0, 0, 5 );
	
	bSizer121->Add( sbSizer41, 1, 0, 5 );
	
	wxBoxSizer* bSizer271;
	bSizer271 = new wxBoxSizer( wxVERTICAL );
	
	bSizer271->SetMinSize( wxSize( 100,-1 ) ); 
	bSizer121->Add( bSizer271, 0, 0, 5 );
	
	wxStaticBoxSizer* sbSizer2;
	sbSizer2 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("Instruction Memory") ), wxVERTICAL );
	
	sbSizer2->SetMinSize( wxSize( 200,-1 ) ); 
	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxVERTICAL );
	
	bSizer9->SetMinSize( wxSize( 200,-1 ) ); 
	m_listBox3 = new wxListBox( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, NULL, wxLB_ALWAYS_SB ); 
	bSizer9->Add( m_listBox3, 1, wxALL|wxEXPAND, 5 );
	
	sbSizer2->Add( bSizer9, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer( wxHORIZONTAL );
	
	m_button3 = new wxButton( this, wxID_ANY, wxT("Load Instructions"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer7->Add( m_button3, 0, wxALL, 5 );
	
	m_button4 = new wxButton( this, wxID_ANY, wxT("Reset"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer7->Add( m_button4, 0, wxALL, 5 );
	
	sbSizer2->Add( bSizer7, 0, 0, 5 );
	
	bSizer121->Add( sbSizer2, 1, 0, 5 );
	
	bSizer5->Add( bSizer121, 1, wxEXPAND, 5 );
	
	bSizer2->Add( bSizer5, 0, wxEXPAND, 5 );
	
	wxStaticBoxSizer* sbSizer5;
	sbSizer5 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("CPU Initialization") ), wxHORIZONTAL );
	
	sbSizer5->SetMinSize( wxSize( -1,20 ) ); 
	m_button61 = new wxButton( this, wxID_ANY, wxT("Start"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer5->Add( m_button61, 0, wxALL, 5 );
	
	m_button7 = new wxButton( this, wxID_ANY, wxT("Pause"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer5->Add( m_button7, 0, wxALL, 5 );
	
	m_button8 = new wxButton( this, wxID_ANY, wxT("Stop"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer5->Add( m_button8, 0, wxALL, 5 );
	
	bSizer2->Add( sbSizer5, 0, wxEXPAND, 5 );
	
	wxStaticBoxSizer* sbSizer6;
	sbSizer6 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("Status") ), wxHORIZONTAL );
	
	wxBoxSizer* bSizer23;
	bSizer23 = new wxBoxSizer( wxVERTICAL );
	
	m_listBox41 = new wxListBox( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, NULL, wxLB_ALWAYS_SB|wxLB_NEEDED_SB|wxLB_SINGLE|wxVSCROLL ); 
	m_listBox41->SetFont( wxFont( 10, 74, 90, 92, false, wxT("Times New Roman") ) );
	m_listBox41->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_listBox41->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNHIGHLIGHT ) );
	m_listBox41->SetMinSize( wxSize( -1,175 ) );
	m_listBox41->SetMaxSize( wxSize( -1,175 ) );
	
	bSizer23->Add( m_listBox41, 1, wxALL|wxEXPAND, 5 );
	
	m_button9 = new wxButton( this, wxID_ANY, wxT("Reset"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer23->Add( m_button9, 0, wxALL, 5 );
	
	sbSizer6->Add( bSizer23, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer24;
	bSizer24 = new wxBoxSizer( wxVERTICAL );
	
	m_listBox8 = new wxListBox( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, NULL, wxLB_ALWAYS_SB ); 
	bSizer24->Add( m_listBox8, 1, wxALL|wxEXPAND, 5 );
	
	sbSizer6->Add( bSizer24, 1, wxEXPAND, 5 );
	
	bSizer2->Add( sbSizer6, 1, wxEXPAND, 5 );
	
	bSizer14->Add( bSizer2, 1, wxEXPAND, 5 );
	
	bSizer1->Add( bSizer14, 1, wxEXPAND, 5 );
	
	this->SetSizer( bSizer1 );
	this->Layout();
	m_menubar2 = new wxMenuBar( 0 );
	m_menu1 = new wxMenu();
	wxMenuItem* m_menuItem1;
	m_menuItem1 = new wxMenuItem( m_menu1, wxID_ANY, wxString( wxT("Clear All") ) + wxT('\t') + wxT("ALT-C"), wxT("Clear all Listboxes"), wxITEM_NORMAL );
	m_menu1->Append( m_menuItem1 );
	
	m_menu21 = new wxMenu();
	wxMenuItem* m_menuItem8;
	m_menuItem8 = new wxMenuItem( m_menu21, wxID_ANY, wxString( wxT("Normal") ) , wxT("Sets CPU speed to normal"), wxITEM_NORMAL );
	m_menu21->Append( m_menuItem8 );
	
	wxMenuItem* m_menuItem9;
	m_menuItem9 = new wxMenuItem( m_menu21, wxID_ANY, wxString( wxT("Demo Speed (Slow)") ) , wxT("Sets CPU speed to demo"), wxITEM_NORMAL );
	m_menu21->Append( m_menuItem9 );
	
	m_menu1->Append( -1, wxT("Program Speed"), m_menu21 );
	
	wxMenuItem* m_menuItem7;
	m_menuItem7 = new wxMenuItem( m_menu1, wxID_ANY, wxString( wxT("&Exit") ) + wxT('\t') + wxT("ALT-X"), wxT("Close Program"), wxITEM_NORMAL );
	m_menu1->Append( m_menuItem7 );
	
	m_menubar2->Append( m_menu1, wxT("File") ); 
	
	m_menu5 = new wxMenu();
	m_menu11 = new wxMenu();
	wxMenuItem* m_menuItem6;
	m_menuItem6 = new wxMenuItem( m_menu11, wxID_ANY, wxString( wxT("Follow This Button Order") ) , wxEmptyString, wxITEM_NORMAL );
	m_menu11->Append( m_menuItem6 );
	m_menuItem6->Enable( false );
	
	wxMenuItem* m_menuItem4;
	m_menuItem4 = new wxMenuItem( m_menu11, wxID_ANY, wxString( wxT("1. Load Instructions") ) , wxT("Loads CPU Instructions"), wxITEM_NORMAL );
	m_menu11->Append( m_menuItem4 );
	
	wxMenuItem* m_menuItem5;
	m_menuItem5 = new wxMenuItem( m_menu11, wxID_ANY, wxString( wxT("2. Load Data") ) , wxT("Loads CPU Data"), wxITEM_NORMAL );
	m_menu11->Append( m_menuItem5 );
	
	wxMenuItem* m_menuItem10;
	m_menuItem10 = new wxMenuItem( m_menu11, wxID_ANY, wxString( wxT("3. Start") ) , wxT("Starts the CPU"), wxITEM_NORMAL );
	m_menu11->Append( m_menuItem10 );
	
	m_menu5->Append( -1, wxT("First Time User"), m_menu11 );
	
	m_menubar2->Append( m_menu5, wxT("How To") ); 
	
	m_menu2 = new wxMenu();
	wxMenuItem* m_menuItem2;
	m_menuItem2 = new wxMenuItem( m_menu2, wxID_ANY, wxString( wxT("About Us") ) + wxT('\t') + wxT("ALT-A"), wxT("About Us"), wxITEM_NORMAL );
	m_menu2->Append( m_menuItem2 );
	
	wxMenuItem* m_menuItem3;
	m_menuItem3 = new wxMenuItem( m_menu2, wxID_ANY, wxString( wxT("User Manual") ) + wxT('\t') + wxT("ALT-M"), wxT("User Manual"), wxITEM_NORMAL );
	m_menu2->Append( m_menuItem3 );
	
	m_menubar2->Append( m_menu2, wxT("Help") ); 
	
	this->SetMenuBar( m_menubar2 );
	
	m_statusBar1 = this->CreateStatusBar( 1, wxST_SIZEGRIP, wxID_ANY );
	
	this->Centre( wxBOTH );
	
	// Connect Events
	m_button21->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUI_MainFrame::OnALUReset ), NULL, this );
	m_button6->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUI_MainFrame::OnRegisterReset ), NULL, this );
	m_button1->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUI_MainFrame::OnDataLoad ), NULL, this );
	m_button2->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUI_MainFrame::OnDataReset ), NULL, this );
	m_button62->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUI_MainFrame::OnControlUnitReset ), NULL, this );
	m_button3->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUI_MainFrame::OnImLoad ), NULL, this );
	m_button4->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUI_MainFrame::OnImReset ), NULL, this );
	m_button61->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUI_MainFrame::OnStart ), NULL, this );
	m_button7->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUI_MainFrame::OnPause ), NULL, this );
	m_button8->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUI_MainFrame::OnStop ), NULL, this );
	m_button9->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUI_MainFrame::OnStatusReset ), NULL, this );
	this->Connect( m_menuItem1->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( GUI_MainFrame::OnMenuClearAll ) );
	this->Connect( m_menuItem8->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( GUI_MainFrame::OnNormalSpeed ) );
	this->Connect( m_menuItem9->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( GUI_MainFrame::OnDemoSpeed ) );
	this->Connect( m_menuItem7->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( GUI_MainFrame::OnQuit ) );
	this->Connect( m_menuItem4->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( GUI_MainFrame::OnImLoad ) );
	this->Connect( m_menuItem5->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( GUI_MainFrame::OnDataLoad ) );
	this->Connect( m_menuItem10->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( GUI_MainFrame::OnStart ) );
	this->Connect( m_menuItem2->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( GUI_MainFrame::OnAbout ) );
	this->Connect( m_menuItem3->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( GUI_MainFrame::OnOpen ) );
}

GUI_MainFrame::~GUI_MainFrame()
{
	// Disconnect Events
	m_button21->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUI_MainFrame::OnALUReset ), NULL, this );
	m_button6->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUI_MainFrame::OnRegisterReset ), NULL, this );
	m_button1->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUI_MainFrame::OnDataLoad ), NULL, this );
	m_button2->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUI_MainFrame::OnDataReset ), NULL, this );
	m_button62->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUI_MainFrame::OnControlUnitReset ), NULL, this );
	m_button3->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUI_MainFrame::OnImLoad ), NULL, this );
	m_button4->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUI_MainFrame::OnImReset ), NULL, this );
	m_button61->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUI_MainFrame::OnStart ), NULL, this );
	m_button7->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUI_MainFrame::OnPause ), NULL, this );
	m_button8->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUI_MainFrame::OnStop ), NULL, this );
	m_button9->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( GUI_MainFrame::OnStatusReset ), NULL, this );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( GUI_MainFrame::OnMenuClearAll ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( GUI_MainFrame::OnNormalSpeed ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( GUI_MainFrame::OnDemoSpeed ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( GUI_MainFrame::OnQuit ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( GUI_MainFrame::OnImLoad ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( GUI_MainFrame::OnDataLoad ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( GUI_MainFrame::OnStart ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( GUI_MainFrame::OnAbout ) );
	this->Disconnect( wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler( GUI_MainFrame::OnOpen ) );
	
}
