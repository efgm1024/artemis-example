#pragma once

#include "artemis/Entity.h"
#include "artemis/ComponentMapper.h"
#include "artemis/EntityProcessingSystem.h"

#include "PositionComponent.h"
#include "VelocityComponent.h"

class MovementSystem : public artemis::EntityProcessingSystem
{
public:
	MovementSystem();

	virtual void initialize();
	virtual void processEntity(artemis::Entity&);

private:
	artemis::ComponentMapper<VelocityComponent> velocityMapper;
    artemis::ComponentMapper<PositionComponent> positionMapper;

}; // class MovementSystem