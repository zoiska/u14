//
// Created by zoisk on 04.01.24.
//

#include "line.h"

namespace line {
    line::line(pnkt::Punkt *p1, pnkt::Punkt *p2) {
        this->p1 = p1;
        this->p2 = p2;
    }

    line line::copy_line(pnkt::Punkt *p1, pnkt::Punkt *p2) {
        return line(nullptr, nullptr);
    }

    line line::operator=(const line &other) const {
        return line(nullptr, nullptr);
    }

    line::~line() {

    }

    void line::drucke() {

    }

    double line::laenge() {
        return 0;
    }

}