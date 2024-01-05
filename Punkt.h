//
// Created by zoisk on 21.12.23.
//

#ifndef PUNKT_H
#define PUNKT_H

#include <iostream>
#include <sstream>
#include <cmath>

class Punkt {
private:
    double x;
    double y;
public:
    Punkt(double x, double y);
    void translate(double x, double y);
    void drucke();
    std::string getCoords();
    double get_x();
    double get_y();
    double abstand(Punkt pnkt2);
};

#endif //PUNKT_H