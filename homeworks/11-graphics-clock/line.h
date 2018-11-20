#ifndef LINE_H
#define LINE_H
#include<wx/wx.h>
#include "shape.h"
#include "point.h"

class Line : public Shape
{
public:
	Line(wxDC* dc, Point s, Point e) 
		: Shape(dc), start(s), end(e) {}
private:
	void draw() override;

	Point start;
	Point end;
};

#endif // !LINE_H
