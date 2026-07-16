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




