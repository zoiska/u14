#include <iostream>
#include "line.h"
#include "Punkt.h"

int main() {
    pnkt::Punkt punkt1(5, 6);
    pnkt::Punkt punkt2(2, 5);

    punkt1.drucke();
    punkt2.drucke();

    line::line linie(&punkt1, &punkt2);

    std::cout << linie << std::endl;
    return 0;
}
