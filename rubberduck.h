#ifndef RUBBERDUCK_H
#define RUBBERDUCK_H

#include "duck.h"

/* Rubber Duck cannot fly and squeeks instead of quacking. */

class RubberDuck : public Duck
{
public:
    RubberDuck();
    ~RubberDuck() override;
    void display() const override;
};

#endif // RUBBERDUCK_H
