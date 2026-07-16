#pragma once
#include "Shape.h"

class CSakura : public CShape
{
public:

	CSakura();
	~CSakura();
	void draw() override;


private:

	vec2 setRoundPosition(float radius, double angle);

};

