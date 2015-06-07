#ifndef MALLARDDUCK_H
#define MALLARDDUCK_H

#include "duck.h"

/* Mallard Duck can fly and quacks simply. */

class MallardDuck : public Duck
{
public:
    MallardDuck();
    ~MallardDuck() override;
    void display() const override;
};

#endif // MALLARDDUCK_H
