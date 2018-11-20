#ifndef TEXT_H
#define TEXT_H
#include<wx/wx.h>
#include "shape.h"
#include "point.h"

class Text: public Shape
{
public:
	Text(wxDC* dc, std::string t, Point p) : Shape(dc), text(t), point(p) {}
	void draw() override;
private:
	Point point;
	std::string text;
};

#endif // TEXT_H