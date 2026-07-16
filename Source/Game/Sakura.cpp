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
        DrawCircle(Position.X + setRoundPosition(70, angle).X * Scale.X, Position.Y - setRoundPosition(70, angle).Y * Scale.Y, 50 * Scale.X, ObjectColor);
    }
    for (int i = 0; i < 5; i++) // second round of circles
    {
        int angle = (360 / 5) * (i + 1);
        DrawCircle(Position.X + setRoundPosition(60, angle).X * Scale.X, Position.Y - setRoundPosition(60, angle).Y * Scale.Y, 45 * Scale.X, WHITE);
    }
    for (int i = 0; i < 5; i++) // round of lines
    {
        int angle = (360 / 5) * (i + 1);
        DrawLine(Position.X, Position.Y, Position.X + setRoundPosition(60, angle).X * Scale.X, Position.Y - setRoundPosition(60, angle).Y * Scale.Y, ObjectColor);
    }
    for (int i = 0; i < 5; i++) // round of lines
    {
        int angle = (360 / 5) * (i + 1);
        DrawCircle(Position.X + setRoundPosition(60, angle).X * Scale.X, Position.Y - setRoundPosition(60, angle).Y * Scale.Y, 10 * Scale.X, ObjectColor);
    }
    DrawCircle(Position.X, Position.Y, 30 * Scale.X, ObjectColor);// center circle
    DrawRectangle(Position.X - 2.5, Position.Y - 10, 5, 20, WHITE);
    DrawRectangle(Position.X - 10, Position.Y - 2.5, 20, 5, WHITE);
}

vec2 CSakura::setRoundPosition(float radius, double angle)
{
    vec2 position;
    double roundAngle = angle * (3.14 / 180.0);
    position.X = radius * std::cos(roundAngle);
    position.Y = radius * std::sin(roundAngle);
    return position;
}
