#include "line.h"

void Line::draw()
{
	device_context->DrawLine(start.x, start.y, end.x, end.y);
}
