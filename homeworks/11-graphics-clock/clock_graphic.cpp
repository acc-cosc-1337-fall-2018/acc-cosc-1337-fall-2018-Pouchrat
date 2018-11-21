#include "clock_graphic.h"

ClockGraphic::ClockGraphic(wxDC* dc, Point s, Point e) 
	: device_context(dc), start(s), end(e)
{
	clock_rim = std::make_unique<Circle>(dc, s, e);
	wxRect w(start.x, start.y, end.x, end.y);
	height = w.GetHeight();
	width = w.GetWidth();
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
	double angle = get_angle(degrees);
	int x1 = width / 2;
	int y1 = height / 2;
	int x2 = cos(angle) * length + width / 2;
	int y2 = sin(angle) * length + width / 2;

	std::unique_ptr<Shape> line = std::make_unique<Line>(device_context, 
														Point(x1, y1), Point(x2, y2));
	line->draw();
}

void ClockGraphic::draw_hours_hand()
{
	double hours_angle = 3 / 12.0 * 360.0;
	device_context->SetPen(wxPen(wxColor(255, 0, 0), 3));
	draw_hand(hours_angle, 45);
}

void ClockGraphic::draw_minutes_hand()
{
	double minutes_angle = 30 / 60.0 * 360.0;
	device_context->SetPen(wxPen(wxColor(0, 0, 255), 2));
	draw_hand(minutes_angle, 90);
}

void ClockGraphic::draw_seconds_hand()
{
	double seconds_angle = 45 / 60.0 * 360.0;
	device_context->SetPen(wxPen(wxColor(0, 255, 0), 1));
	draw_hand(seconds_angle, 105);
}

void ClockGraphic::draw_hours_text()
{
	for (int i = 0; i < 12; i++) {
		double hours_angle = i / 12.0 * 360.0;
		double angle = get_angle(hours_angle);
		double length = 90;

		int x = cos(angle) * length + width / 2;
		int y = sin(angle) * length + width / 2;

		int hour = i;

		if (i == 0) {
			hour = 12;
		}


		std::unique_ptr<Shape> text = std::make_unique<Text>(device_context, std::to_string(hour), Point(x, y));

		text->draw();

		
	}
}

void ClockGraphic::draw_seconds_markers()
{
	for (int i = 0; i < 60; i++) {
		double seconds_angle = i / 60.0 * 360.0;
		double angle = get_angle(seconds_angle);
		double inner_length = 105;
		double outer_length = 115;
		
		int x1 = cos(angle) * inner_length + width / 2;
		int y1 = sin(angle) * inner_length + width / 2;

		int x2 = cos(angle) * outer_length + width / 2;
		int y2 = sin(angle) * outer_length + width / 2;

		std::unique_ptr<Shape> line = std::make_unique<Line>(device_context, 
															Point(x1, y1), Point(x2, y2));

		device_context->SetPen(wxPen(wxColor(0, 0, 0), 1));

		if (i % 5 == 0) {
			device_context->SetPen(wxPen(wxColor(0, 0, 0), 3));
		}

		line->draw();
	}
}

double ClockGraphic::get_angle(double degrees)
{
	return ((degrees - 90) * pi) / 180;
}

