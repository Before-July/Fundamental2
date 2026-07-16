#include "Circle.h"

CCircle::CCircle() : Radius(50.0f)
{
	ObjectColor = RED;
}

CCircle::~CCircle()
{
}

void CCircle::draw()
{
	DrawCircle(Position.X, Position.Y, Radius * Breathing.X, ObjectColor);
}
