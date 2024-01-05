//
// Created by zoisk on 05.01.24.
//

#ifndef KREIS_H
#define KREIS_H

#include "Punkt.h"

class Kreis{
private:
    Punkt *mittelpunkt;
    double radius;
    std::string f;
public:
    Kreis(int x, int y, double r, std::string f);
    Punkt get_mittelpunkt();
    std::string get_Farbe();
    void wachse(double r);
    void bewege(int x, int y);
    bool im_Kreis(Punkt punkt);
};

#endif //KREIS_H
