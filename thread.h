#ifndef __THREAD_H_INCLUDED__
#define __THREAD_H_INCLUDED__

class CPUThread : public wxThread
{
private:
	MainFrame *m_frame;
public:

    CPUThread(MainFrame *frame);

    // thread execution starts here
    virtual void *Entry();

    // called when the thread exits - whether it terminates normally or is
    // stopped with Delete() (but not when it is Kill()ed!)
    virtual void OnExit();

    // write something to the text control
    void WriteText();
};

#endif 