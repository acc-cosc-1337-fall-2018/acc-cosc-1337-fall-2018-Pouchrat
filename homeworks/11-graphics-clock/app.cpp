#include "app.h"
#include "frame.h"

bool App::OnInit() 
{
	auto frame = new Frame();
	frame->Show(true);

	return true;
}