#include "frame.h"

#include "frame.h"
#include "panel.h"

Frame::Frame()
	: wxFrame(NULL, wxID_ANY, "Tic Tac Toe", wxDefaultPosition, wxSize(400, 300))
{
	auto panel = new Panel(this);
}
