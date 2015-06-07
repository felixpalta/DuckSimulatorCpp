#ifndef QUACKMUTE_H
#define QUACKMUTE_H

#include "quackbehaviour.h"

class QuackMute : public QuackBehaviour
{
public:
    QuackMute();
    void quack() const override;
};

#endif // QUACKMUTE_H
