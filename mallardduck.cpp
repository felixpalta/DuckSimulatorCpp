#include "mallardduck.h"
#include "flywithwings.h"
#include "quacksimple.h"

#include <iostream>
using namespace std;

MallardDuck::MallardDuck()
    : Duck(new FlyWithWings(), new QuackSimple())
{
}

MallardDuck::~MallardDuck()
{
    delete _flying;
    delete _quacking;
}

void MallardDuck::display() const
{
    cout << "This is a Mallard Duck" << endl;
}
