#include "circle.h"

void Circle::draw() 
{
	device_context->DrawEllipse(start.x, start.y, end.x, end.y);
}