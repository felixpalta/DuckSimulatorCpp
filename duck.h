#ifndef DUCK_H
#define DUCK_H

#include "flybehaviour.h"
#include "quackbehaviour.h"

class Duck
{
protected:
    FlyBehaviour *_flying;
    QuackBehaviour *_quacking;

protected:
    Duck(FlyBehaviour *f, QuackBehaviour *q);

public:
    void perform_flying() const;
    void perform_quacking() const;
    virtual void display() const = 0;
    void swim() const;
    void set_fly_behavior(FlyBehaviour *f);
    virtual ~Duck();

private:
    Duck(const Duck& other) = delete;
    Duck& operator=(const Duck& other) = delete;
};

#endif // DUCK_H
