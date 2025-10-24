#ifndef SUBMARINO_H
#define SUBMARINO_H
#include "Embarcacion.h"

class Submarino : public Embarcacion {
private:
    int profundidadMax;
    int tripulantes;

public:
    Submarino(string n, int c, double l, int a, int p, int t);
    ~Submarino();

    void mostrarDatos() override;
    void sumergir();
};

#endif
