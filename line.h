//
// Created by zoisk on 04.01.24.
//

#ifndef LINE_H
#define LINE_H

#include "Punkt.h"

namespace line {

    class line {
    private:
        pnkt::Punkt *p1;
        pnkt::Punkt *p2;
    public:
        line(pnkt::Punkt *p1, pnkt::Punkt *p2);
        line copy_line(pnkt::Punkt *p1, pnkt::Punkt *p2);
        line operator=(const line& other) const;
        ~line();
        double laenge();
        void drucke();
    };

};

#endif //LINE_H
