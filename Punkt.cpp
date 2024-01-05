//
// Created by zoisk on 21.12.23.
//

#include "Punkt.h"

Punkt::Punkt(double x, double y) {
    this->x = x;
    this->y = y;
}

void Punkt::translate(double x, double y) {
    this->x += x;
    this->y += y;
}

void Punkt::drucke() {
    std::cout << "(" << get_x() << ", " << get_y() << ")" << std::endl;
}

std::string Punkt::getCoords() {
    std::ostringstream convert;
    convert << "Meine Koordinaten sind ["
            << this->x << ", " << this->y << "].";
    return convert.str();
}

double Punkt::get_x() {
    return x;
}

double Punkt::get_y() {
    return y;
}

double Punkt::abstand(Punkt pnkt2) {
    double x1 = this->get_x();
    double y1 = this->get_y();
    double x2 = pnkt2.get_x();
    double y2 = pnkt2.get_y();
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}