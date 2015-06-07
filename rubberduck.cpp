#include "rubberduck.h"
#include "flynone.h"
#include "quacksqueek.h"

#include <iostream>
using namespace std;

RubberDuck::RubberDuck()
    : Duck(new FlyNone(), new QuackSqueek())
{
}

RubberDuck::~RubberDuck()
{
    delete _flying;
    delete _quacking;
}

void RubberDuck::display() const
{
    cout << "This is a Rubber Duck!" << endl;
}
