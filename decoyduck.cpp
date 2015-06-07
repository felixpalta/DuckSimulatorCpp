#include "decoyduck.h"
#include "flynone.h"
#include "quackmute.h"
#include <iostream>
using namespace std;

DecoyDuck::DecoyDuck()
    : Duck(new FlyNone(), new QuackMute())
{

}

DecoyDuck::~DecoyDuck()
{
}

void DecoyDuck::display() const
{
    cout << "This is a Decoy Duck!" << endl;
}
