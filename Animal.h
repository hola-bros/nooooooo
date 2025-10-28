#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>
using namespace std;

class Animal {
protected:
    string color;
    int edad;

public:
    Animal(string c, int e) : color(c), edad(e) {}

    void comer() {
        cout << "El animal está comiendo." << endl;
    }

    void dormir() {
        cout << "El animal está durmiendo." << endl;
    }
};

#endif
