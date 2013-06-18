#include "PositionComponent.h"

PositionComponent::PositionComponent()
{
	this->positionX = 0.0f;
	this->positionY = 0.0f;
}

PositionComponent::PositionComponent(float x, float y)
{
	this->positionX = x;
	this->positionY = y;
}