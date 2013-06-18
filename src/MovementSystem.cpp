#include "MovementSystem.h"

MovementSystem::MovementSystem()
{
	addComponentType<VelocityComponent>();
	addComponentType<PositionComponent>();
}

void MovementSystem::initialize()
{
	velocityMapper.init(*world);
	positionMapper.init(*world);
}

void MovementSystem::processEntity(artemis::Entity& e)
{
	positionMapper.get(e)->positionX += velocityMapper.get(e)->velocityX * world->getDelta();
	positionMapper.get(e)->positionY += velocityMapper.get(e)->velocityY * world->getDelta();
}