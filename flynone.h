#ifndef FLYNONE_H
#define FLYNONE_H

#include "flybehaviour.h"

class FlyNone : public FlyBehaviour
{
public:
    void fly() const override;
};

#endif // FLYNONE_H
