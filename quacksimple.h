#ifndef QUACKSIMPLE_H
#define QUACKSIMPLE_H

#include "quackbehaviour.h"

class QuackSimple : public QuackBehaviour
{
public:
    QuackSimple();
    void quack() const override;
};

#endif // QUACKSIMPLE_H
