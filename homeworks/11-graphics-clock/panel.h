#ifndef PANEL_H
#define PANEL_H
#include<wx/wx.h>
#include<vector>
#include<string>
#include<memory>
#include <math.h>
#include "text.h"
#include "clock_graphic.h"

class Panel : public wxPanel 
{
public:
	Panel(wxWindow* parent);
private:
	void OnStartTimer(wxCommandEvent & event);
	void OnTimer(wxTimerEvent& event);

	wxTextCtrl* draw_clock;
	wxClientDC* cdc;
	wxTimer* timer;
	std::unique_ptr<ClockGraphic> clock;

};

#endif // !PANEL_H
