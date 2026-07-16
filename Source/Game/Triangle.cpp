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
	DrawLine(Position.X, Position.Y, Position.X + v1.X * Breathing.X, Position.Y + v1.Y * Breathing.Y, ObjectColor);
	DrawLine(Position.X, Position.Y, Position.X + Breathing.X * setTrianglePoint(v1.X, 60).X, Position.Y + Breathing.Y * setTrianglePoint(v1.X, 60).Y, ObjectColor);
	DrawLine(Position.X + Breathing.X * setTrianglePoint(v1.X, 60).X, Position.Y + Breathing.Y * setTrianglePoint(v1.X, 60).Y, Position.X + v1.X * Breathing.X, Position.Y + v1.Y * Breathing.Y, ObjectColor);

}

vec2 CTriangle::setTrianglePoint(float length ,float angle)
{
	vec2 position;
	double roundAngle = angle * (3.14 / 180.0);
	position.X = length * std::cos(roundAngle);
	position.Y = length * std::sin(roundAngle);
	return position;

}
