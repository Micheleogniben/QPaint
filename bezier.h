#ifndef RETTA_H
#define RETTA_H

#include "tratto.h"

class Bezier : public Tratto
{
private:
    std::list<std::tuple<unsigned short, unsigned short>> focalPoints;
public:
    Bezier(std::list<std::tuple<unsigned short, unsigned short>> points);
    void draw(){}
};

#endif // RETTA_H
