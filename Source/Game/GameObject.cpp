#include "GameObject.h"
#include "Helpers/Drawing.h"

CGameObject::CGameObject()
{
}

CGameObject::~CGameObject()
{
}

vec2 CGameObject::getPosition()
{
    return Position;
}

void CGameObject::setPosition(vec2 position)
{
    Position = position;
}