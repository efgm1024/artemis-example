#include "VelocityComponent.h"

VelocityComponent::VelocityComponent()
{
	this->velocityX = 0.0f;
	this->velocityY = 0.0f;
}

VelocityComponent::VelocityComponent(float x, float y)
{
	this->velocityX = x;
	this->velocityY = y;
}