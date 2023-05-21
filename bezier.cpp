#include "bezier.h"

Bezier::Bezier(std::list<std::tuple<unsigned short, unsigned short >> points):
    Tratto(points.front(),points.back()), focalPoints(points) {}
