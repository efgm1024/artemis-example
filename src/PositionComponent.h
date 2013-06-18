#pragma once

#include "artemis/Component.h"

class PositionComponent : public artemis::Component
{
public:
	float positionX;
    float positionY;

	PositionComponent();
	PositionComponent(float, float);

}; // class PositionComponent