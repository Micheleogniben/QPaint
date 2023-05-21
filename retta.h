#ifndef RETTA_H
#define RETTA_H

#include "tratto.h"

class Retta : public Tratto
{
public:
    Retta(std::tuple<unsigned short, unsigned short>, std::tuple<unsigned short, unsigned short>);
    void draw(){}
};

#endif // RETTA_H
