#include "Shape.h"

CShape::CShape()
{
	ObjectColor = RED;
}

CShape::~CShape()
{
}

void CShape::setPosition(float mouseX, float mouseY)
{
	Position.X = mouseX;
	Position.Y = mouseY;
}

void CShape::addScale() { Scale += 0.1; }

void CShape::resetScale() { Scale = 1; }

void CShape::breathingScale()
{
	AddBreath += 2;
	double breath = AddBreath * (3.14 / 180.0);
	Breathing.X = 0.25 * sin(breath) + Scale.X;
	Breathing.Y = 0.25 * sin(breath) + Scale.Y;
}




