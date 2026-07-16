#include "Player.h"

CPlayer::CPlayer()
{
    
    Texture = LoadTexture("Data/Textures/Samurai.png");
    Sprite = new Sprite2D(Texture);
}

CPlayer::~CPlayer()
{
    delete Sprite;
    UnloadTexture(Texture);
}

void CPlayer::update()
{
    Position.X += Direction * MoveSpeed;
}

void CPlayer::draw()
{
    Sprite->draw(Position, Angles, Scale);
}

int CPlayer::getSpriteSize()
{
    return Texture.height;
}
