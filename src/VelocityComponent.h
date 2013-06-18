#pragma once

#include "artemis/Component.h"

class VelocityComponent : public artemis::Component
{
public:
	float velocityX;
    float velocityY;

	VelocityComponent();
	VelocityComponent(float, float);

}; // class VelocityComponent