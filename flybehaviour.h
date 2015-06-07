#ifndef FLYBEHAVIOUR_H
#define FLYBEHAVIOUR_H

class FlyBehaviour
{
public:
    virtual void fly() const = 0;
    virtual ~FlyBehaviour() {}
};

#endif // FLYBEHAVIOUR_H
