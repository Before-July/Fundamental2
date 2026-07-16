#include "Triangle.h"

CTriangle::CTriangle()
{
	ObjectColor = GREEN;
}

CTriangle::~CTriangle()
{
}

void CTriangle::draw()
{
	DrawLine(Position.X, Position.Y, Position.X + v1.X * Scale.X, Position.Y + v1.Y * Scale.Y, ObjectColor);
}
