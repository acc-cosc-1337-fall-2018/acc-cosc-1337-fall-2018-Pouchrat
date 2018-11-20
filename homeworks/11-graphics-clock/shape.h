#ifndef  SHAPE_H
#define SHAPE_H
#include<wx/wx.h>

class Shape 
{
public:
	Shape(wxDC* dc) : device_context(dc) {}
	virtual void draw() = 0;
protected:
	wxDC* device_context;
};

#endif // SHAPE_H