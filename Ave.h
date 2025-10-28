#ifndef AVE_H
#define AVE_H

#include <iostream>
#include <string>
#include "Animal.h"
using namespace std;

class Ave : public Animal {
public:

    Ave(string c, int e) : Animal(c, e) {}


    void volar() {
        cout << "El ave está volando." << endl;
    }
};

#endif
