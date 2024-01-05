#include <iostream>
#include "Line.h"
#include "Punkt.h"
#include "Kreis.h"

int main() {
    Line linie1(0, 0, 2, 1);
    linie1.drucke();

    Line linie2(linie1);

    linie2.drucke();
    std::cout << linie2.laenge() << std::endl;

    std::cout << linie2.steigung() << std::endl;

    linie1.translate(1, 1);
    linie1.drucke();

    Line linie3(0, 0, 0, 0);
    linie2 = linie2;
    linie2.drucke();

    std::cout << linie2.toString() << std::endl;


    Kreis kreis1(0, 0, 2, "rot");

    return 0;
}
