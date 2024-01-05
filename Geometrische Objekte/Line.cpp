//
// Created by zoisk on 04.01.24.
//

#include "Line.h"

Line::Line(int x1, int y1, int x2, int y2) {
    this->p1 = new Punkt(x1, y1);
    this->p2 = new Punkt(x2, y2);
}

Line::~Line() {
    delete p1;
    delete p2;
}

Line::Line(const Line& other) {
    this->p1 = new Punkt(other.get_x1(), other.get_y1());
    this->p2 = new Punkt(other.get_x2(), other.get_y2());
}

double Line::get_x1() const {
    return p1->get_x();
}

double Line::get_y1() const {
    return p1->get_y();
}

double Line::get_x2() const {
    return p2->get_x();
}

double Line::get_y2() const {
    return p2->get_y();
}

double Line::laenge() {
    double x1 = p1->get_x();
    double y1 = p1->get_y();
    double x2 = p2->get_x();
    double y2 = p2->get_y();
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

double Line::steigung() {
    double dy = p2->get_y() - p1->get_y();
    double dx = p2->get_x() - p1->get_x();
    return (double)dy / dx;
}

void Line::translate(double move_x, double move_y) {
    p1->translate(move_x, move_y);
    p2->translate(move_x, move_y);

}

std::string Line::toString() {
    return "Linie von " + p1->getCoords() + " bis " + p2->getCoords();
}

const Line& Line::operator=(Line &other){
    if(this != &other) {
        delete p1;
        delete p2;
        this->p1 = new Punkt(other.get_x1(), other.get_y1());
        this->p2 = new Punkt(other.get_x2(), other.get_y2());
        return *this;
    }
    return *this;
}

void Line::drucke() {
    std::cout << "P1(" << p1->get_x() << ", " << p1->get_y() << ") P2(" << p2->get_x() << ", " << p2->get_y() << ")" << std::endl;
}
