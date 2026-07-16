#pragma once
#include "Helpers/Vector.h"
#include "raylib.h"


class CGameObject // abstricte class 
{ 
public:
    CGameObject();
    ~CGameObject();

    virtual void update() = 0; // pure virtal function, must be override
    virtual void draw() = 0;

    vec2 getPosition();
    void setPosition(vec2 position);

protected:
    vec2 Position;
    float Angles = 0;
    vec2 Scale = 4;

    Color ObjectColor = RED;
};

