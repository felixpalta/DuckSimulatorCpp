#ifndef QUACKBEHAVIOUR_H
#define QUACKBEHAVIOUR_H

class QuackBehaviour
{
public:
    virtual void quack() const = 0;
    virtual ~QuackBehaviour() {}
};

#endif // QUACKBEHAVIOUR_H
