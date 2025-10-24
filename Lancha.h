#ifndef LANCHA_H
#define LANCHA_H
#include "Embarcacion.h"

class Lancha : public Embarcacion {
private:
    int potenciaMotor;
    double combustible;

public:
    Lancha(string n, int c, double l, int a, int p, double comb);
    ~Lancha();

    void mostrarDatos() override;
    void acelerar();
};

#endif
