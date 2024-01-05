//
// Created by zoisk on 04.01.24.
//

#ifndef LINE_H
#define LINE_H

#include "Punkt.h"

    class Line {
    private:
        Punkt *p1;
        Punkt *p2;
    public:
        Line(int x1, int y1, int x2, int y2);
        ~Line();
        Line(const Line& line);
        double get_x1() const;
        double get_y1() const;
        double get_x2() const;
        double get_y2() const;
        double laenge();
        double steigung();
        void translate(double move_x, double move_y);
        std::string toString();
        const Line& operator=(Line &other);
        void drucke();
    };

#endif //LINE_H
