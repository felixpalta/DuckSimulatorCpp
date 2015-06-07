#ifndef QUACKSQUEEK_H
#define QUACKSQUEEK_H

#include "quackbehaviour.h"

class QuackSqueek : public QuackBehaviour
{
public:
    QuackSqueek();
    void quack() const override;
};

#endif // QUACKSQUEEK_H
