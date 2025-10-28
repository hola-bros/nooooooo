#ifndef FELINO_H
#define FELINO_H

#include <iostream>
#include <string>
#include "Animal.h"
using namespace std;

class Felino : public Animal {
public:

    Felino(string c, int e) : Animal(c, e) {}


    void aranar() {
        cout << "El felino está arañando." << endl;
    }
};

#endif
