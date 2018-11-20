#include "clock_graphic.h"

ClockGraphic::ClockGraphic(wxDC* dc, Point s, Point e) 
	: device_context(dc), start(s), end(e)
{

}

void ClockGraphic::draw() 
{
	device_context->SetPen(wxPen(wxColor(0, 0, 0), 1));
	clock_rim->draw();
	draw_seconds_markers();
	draw_hours_text();
	draw_hours_hand();
	draw_minutes_hand();
	draw_seconds_hand();
	clock.update_time();
}

/*
Draw a clock hand on this Clock at angle degrees length pixels long
*/
void ClockGraphic::draw_hand(double degrees, int length)
{

}

void ClockGraphic::draw_hours_hand()
{

}

void ClockGraphic::draw_minutes_hand()
{

}

void ClockGraphic::draw_seconds_hand()
{

}

void ClockGraphic::draw_hours_text()
{

}

void ClockGraphic::draw_seconds_markers()
{

}

double ClockGraphic::get_angle(double degrees)
{
	return ((degrees - 90) * pi) / 180;
}

