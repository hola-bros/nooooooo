#ifndef VELERO_H
#define VELERO_H
#include "Embarcacion.h"

class Velero : public Embarcacion {
private:
    int numVelas;
    string materialMastil;

public:
    Velero(string n, int c, double l, int a, int v, string m);
    ~Velero();

    void mostrarDatos() override;
    void izarVelas();
};

#endif
