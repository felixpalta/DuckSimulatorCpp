#ifndef DECOYDUCK_H
#define DECOYDUCK_H
#include "duck.h"

/* Decoy Duck can neither fly, nor quack. */

class DecoyDuck : public Duck
{
public:
    DecoyDuck();
    ~DecoyDuck() override;
    void display() const override;
};

#endif // DECOYDUCK_H
