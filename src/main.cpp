#include <Windows.h>
#include "artemis/World.h"
#include "artemis/SystemManager.h"
#include "MovementSystem.h"


int main(int argc, char **argv) {

    artemis::World world;
    artemis::SystemManager * sm = world.getSystemManager();
    MovementSystem * movementsys = (MovementSystem*)sm->setSystem(new MovementSystem());
    artemis::EntityManager * em = world.getEntityManager();

    sm->initializeAll();

    artemis::Entity & player = em->create();

    player.addComponent(new VelocityComponent(2,4));
    player.addComponent(new PositionComponent(0,0));
    player.refresh();

    PositionComponent * comp = (PositionComponent*)player.getComponent<PositionComponent>();

    while(true){

        world.loopStart();
        world.setDelta(0.0016f);
        movementsys->process();

		std::cout << "X:"<< comp->positionX << std::endl;
		std::cout << "Y:"<< comp->positionY << std::endl;
        Sleep(160);
    }

    return 0;
}