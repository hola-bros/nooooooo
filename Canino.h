#ifndef CANINO_H
#define CANINO_H

#include <iostream>
#include <string>

#include "Animal.h"

using namespace std;

class Canino: public Animal {
public:
    Canino(string c, int e) : Animal(c, e) {}

    void irPorPelota() {
        cout <<"el perro esta llemndo por la pelota." << endl;
    }

};
#endif