#include "quackmute.h"
#include <iostream>
using namespace std;

QuackMute::QuackMute()
{
}

void QuackMute::quack() const
{
    cout << "[Silence]" << endl;
}
