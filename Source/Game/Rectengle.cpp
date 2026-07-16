#include "Rectengle.h"

CRectengle::CRectengle() : Width(40.0), Height(60.0)
{
    ObjectColor = BLUE;
}

CRectengle::~CRectengle()
{
}

void CRectengle::draw() // draw rectengle
{
    DrawRectangle(Position.X, Position.Y, Width * Scale.X, Height * Scale.Y, ObjectColor);
}

