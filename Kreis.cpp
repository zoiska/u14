//
// Created by zoisk on 05.01.24.
//

#include "Kreis.h"

Kreis::Kreis(int x, int y, double r, Farbe f) {
    this->mittelpunkt = new Punkt(x, y);
    this->radius = r;
    this->f = f;
}

Punkt Kreis::get_mittelpunkt() {
    return *mittelpunkt;
}

Farbe Kreis::get_Farbe() {
    return Farbe();
}

void Kreis::wachse(double r) {
    this->radius += r;
}

void Kreis::bewege(int x, int y) {
    this->mittelpunkt->translate(x, y);
}

bool Kreis::im_Kreis(Punkt punkt) {
    if(mittelpunkt->abstand(punkt) <= radius) {
        return true;
    }
    else{
        return false;
    }
}
