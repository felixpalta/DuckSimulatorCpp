#include <iostream>
#include "mallardduck.h"
#include "rubberduck.h"
#include "decoyduck.h"
#include "flywithwings.h"

using namespace std;

int main()
{
    Duck *duck = new MallardDuck();
    duck->display();
    duck->swim();
    duck->perform_flying();
    duck->perform_quacking();

    delete duck;

    duck = new RubberDuck();
    duck->display();
    duck->swim();
    duck->perform_flying();
    duck->perform_quacking();
    delete duck;

    duck = new DecoyDuck();
    duck->display();
    duck->swim();
    duck->perform_flying();
    duck->perform_quacking();
    duck->set_fly_behavior(new FlyWithWings());
    duck->perform_flying();
    delete duck;

    return 0;
}

