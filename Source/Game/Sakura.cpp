#include "Sakura.h"

CSakura::CSakura()
{
    ObjectColor = RED;
}

CSakura::~CSakura()
{
}

void CSakura::draw() 
{
    for (int i = 0; i < 5; i++) // first round of circles
    {
        int angle = (360 / 5) * (i + 1);
        DrawCircle(Position.X + setRoundPosition(50, angle).X * Breathing.X, Position.Y - setRoundPosition(50, angle).Y * Breathing.Y, 40 * Breathing.X, ObjectColor);
    }
    for (int i = 0; i < 5; i++) // second round of circles
    {
        int angle = (360 / 5) * (i + 1);
        DrawCircle(Position.X + setRoundPosition(40, angle).X * Breathing.X, Position.Y - setRoundPosition(40, angle).Y * Breathing.Y, 30 * Breathing.X, WHITE);
    }
    for (int i = 0; i < 5; i++) // round of lines
    {
        int angle = (360 / 5) * (i + 1);
        DrawLine(Position.X, Position.Y, Position.X + setRoundPosition(40, angle).X * Breathing.X, Position.Y - setRoundPosition(40, angle).Y * Breathing.Y, ObjectColor);
    }
    for (int i = 0; i < 5; i++) // round of circle
    {
        int angle = (360 / 5) * (i + 1);
        DrawCircle(Position.X + setRoundPosition(40, angle).X * Breathing.X, Position.Y - setRoundPosition(40, angle).Y * Breathing.Y, 5 * Breathing.X, ObjectColor);
    }
    DrawCircle(Position.X, Position.Y, 20 * Breathing.X, ObjectColor);// center circle
    DrawRectangle(Position.X - 2.5 * Breathing.X, Position.Y - 10 * Breathing.Y, 5 * Breathing.X, 20 * Breathing.Y, WHITE);
    DrawRectangle(Position.X - 10 * Breathing.X, Position.Y - 2.5 * Breathing.Y, 20 * Breathing.X, 5 * Breathing.Y, WHITE);
}

vec2 CSakura::setRoundPosition(float radius, double angle)
{
    vec2 position;
    double roundAngle = angle * (3.14 / 180.0); ////
    position.X = radius * std::cos(roundAngle);
    position.Y = radius * std::sin(roundAngle);
    return position;
}
