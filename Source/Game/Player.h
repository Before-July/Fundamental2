#pragma once
#include "Helpers/Sprite2D.h"
#include "GameObject.h"


class CPlayer : public CGameObject
{
public:
    CPlayer();
    ~CPlayer();
    void update() override;
    void draw() override;

    void setDirection(float dir) { Direction = dir; }

    int getSpriteSize();

private:

    Texture2D Texture;
    Sprite2D* Sprite;

    float MoveSpeed = 10.0f;
    float Direction = 0;

};

