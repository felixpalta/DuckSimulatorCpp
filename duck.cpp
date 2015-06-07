#include "duck.h"
#include <iostream>

using namespace std;

Duck::Duck(FlyBehaviour *f, QuackBehaviour *q)
    :_flying(f), _quacking(q)
{
}

Duck::~Duck()
{
    delete _flying;
    delete _quacking;
}

void Duck::perform_flying() const
{
    _flying->fly();
}

void Duck::perform_quacking() const
{
    _quacking->quack();
}

void Duck::swim() const
{
    cout << "Swimming is the same for all ducks" << endl;
}

void Duck::set_fly_behavior(FlyBehaviour *f)
{
    delete _flying;
    _flying = f;
}
