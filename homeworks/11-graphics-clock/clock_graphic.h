#ifndef CLOCK_GRAPHIC_H
#define CLOCK_GRAPHIC_H
#include <memory.h>
#include <cmath>
#include <wx/wx.h>
#include "clock.h"
#include "circle.h"
#include "point.h"
#include "line.h"
#include "text.h"

class ClockGraphic
{
public:
	ClockGraphic(wxDC* dc, Point s, Point e);
	void draw();
private:
	void draw_hand(double degrees, int length);
	void draw_hours_hand();
	void draw_minutes_hand();
	void draw_seconds_hand();
	void draw_hours_text();
	void draw_seconds_markers();
	double get_angle(double degrees);

	wxDC* device_context;
	Clock clock;
	
	std::unique_ptr<Circle> clock_rim;
	Point start;
	Point end;
	int height;
	int width;
	double pi{ 3.14159 };
};

#endif // !CLOCK_GRAPHIC_H
