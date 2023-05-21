#ifndef TRATTO_H
#define TRATTO_H

#include "canvasobject.h"

#include <tuple>

class Tratto: public CanvasObject
{
private:
    std::tuple<unsigned short, unsigned short > initCoords;
    std::tuple<unsigned short, unsigned short > finalCoords;
public:
    Tratto(std::tuple<unsigned short, unsigned short >, std::tuple<unsigned short, unsigned short >);

};

#endif // TRATTO_H

