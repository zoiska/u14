//
// Created by zoisk on 05.01.24.
//

#ifndef KREIS_H
#define KREIS_H

#include "Punkt.h"
#include "Farbe.h"

class Kreis{
private:
    Punkt *mittelpunkt;
    double radius;
    Farbe f;
public:
    Kreis(int x, int y, double r, Farbe f);
    Punkt get_mittelpunkt();
    Farbe get_Farbe();
    void wachse(double r);
    void bewege(int x, int y);
    bool im_Kreis(Punkt punkt);
};

#endif //KREIS_H
