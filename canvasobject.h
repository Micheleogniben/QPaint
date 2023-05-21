#ifndef CANVASOBJECT_H
#define CANVASOBJECT_H

#include <list>



struct Coords{                  // Suddividiamo "mentalmente" il canvas in tot rettangoli in modo da poter verificare
    unsigned short x:8;                  // successivamente quali elementi sono toccati dalla gomma
    unsigned short y:8;
};


class CanvasObject
{
private:
    std::list<Coords> CoordsOccupation;
public:

    CanvasObject();
    virtual ~CanvasObject() = default;
    virtual void draw()=0;
    //virtual void UpdateCoords()=0;

};

#endif // CANVASOBJECT_H
