#include "Animal.h"
#include "Ave.h"
#include "Canino.h"
#include "Felino.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
    Ave p1("Juan", 2), p2("AMLO", 3), p3("Claudia", 1);
    p1.comer();
    p2.dormir();
    p3.volar();

    Felino f1("Nano", 4), f2("Mario", 5), f3("Marron", 3);
    f1.comer();
    f2.dormir();
    f3.aranar();

    Canino c1("Daniel", 5), c2("Sergio", 6), c3("Rocky", 4);
    c1.comer();
    c2.dormir();
    c3.irPorPelota();

    return 0;
}
