#include "panel.h"
#include<math.h>

Panel::Panel(wxWindow* parent) : wxPanel(parent, -1) 
{	
	auto vbox = new wxBoxSizer(wxVERTICAL);

	auto hbox0 = new wxBoxSizer(wxHORIZONTAL);
	auto hbox1 = new wxBoxSizer(wxHORIZONTAL);

	//create a button
	auto draw_button = new wxButton(this, -1, wxT("Clock"));
	draw_button->Bind(wxEVT_BUTTON, &Panel::OnStartTimer, this);

	hbox0->Add(draw_button);
	wxPanel* p = new wxPanel(this);
	p->SetSize(wxRect(25, 25, 300, 300));
	vbox->Add(hbox0, 0, wxEXPAND | wxLEFT | wxRIGHT | wxTOP, 5);
	vbox->Add(hbox1, 0, wxEXPAND | wxLEFT | wxRIGHT | wxTOP, 10);
	SetSizer(vbox);

	cdc = new wxClientDC(p);
	clock = std::make_unique<ClockGraphic>(cdc, Point(0, 0), Point(250, 250));
	
	timer = new wxTimer();
	timer->SetOwner(this, -1);
}

void Panel::OnStartTimer(wxCommandEvent & event)
{
	this->Connect(timer->GetId(), wxEVT_TIMER, wxTimerEventHandler(Panel::OnTimer), NULL, this);
	timer->Start(1000);
}

void Panel::OnTimer(wxTimerEvent & event)
{
	clock->draw();
}

