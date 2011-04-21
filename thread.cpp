#include "wx/thread.h"
#include "mainframe.h"
#include "wx/log.h"


//Default Constructor
CPUThread::CPUThread(MainFrame *frame)
        : wxThread()
{
    m_frame = frame;
}

CPUThread *MainFrame::CreateThread()
{
    CPUThread *thread = new CPUThread(this);
    if ( thread->Create() != wxTHREAD_NO_ERROR )
    {
        wxLogError(wxT("Can't create cpu thread!"));
    }
    return thread;
}

void CPUThread::WriteText()
{
	string temp1 = "cpu thread";
	m_frame->OnAluRegister(temp1, "test");
};

void *CPUThread::Entry()
{
	m_frame->cu.initialize(m_frame->dm,m_frame->reg,m_frame->cu,m_frame->im,m_frame->alu, m_frame);

	return NULL;
}

void CPUThread::OnExit()
{
	    
}