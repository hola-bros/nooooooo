#ifndef EMBARCACION_H
#define EMBARCACION_H
#include <iostream>
#include <string>
using namespace std;

class Embarcacion {
protected:
    string nombre;
    int capacidad;
    double longitud;
    int anioFabricacion;

public:
    Embarcacion(string n, int c, double l, int a);
    virtual ~Embarcacion();

    virtual void mostrarDatos();
};

#endif
