#pragma once
#include "Shape.h"

class CCircle : public CShape
{
public:
	CCircle();
	~CCircle();
	void draw() override;

private:
	float Radius;
};

