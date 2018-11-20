#include "text.h"

void Text::draw() 
{
	device_context->DrawText(text, point.x, point.y);
}