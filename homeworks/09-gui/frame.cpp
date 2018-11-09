#include "frame.h"

Frame::Frame(): wxFrame(NULL, wxID_ANY, "TicTacToe", wxDefaultPosition, wxSize(1280, 760))
{
	/*auto panel = new Panel(this);

	CreateStatusBar();
	SetStatusText("Welcome to wxWidgets!");
	Bind(wxEVT_MENU, &Frame::OnAbout, this, wxID_ABOUT);
	Bind(wxEVT_MENU, &Frame::OnExit, this, wxID_EXIT);*/
}

void Frame::OnHello(wxCommandEvent & event)
{
	//wxLogMessage("Hello wxWidgets!");
}

void Frame::OnExit(wxCommandEvent & event)
{
	//Close(true);
}

void Frame::OnAbout(wxCommandEvent & event)
{
	//wxMessageBox("Hello world!",
		//"About Hello World", wxOK | wxICON_INFORMATION);
}
