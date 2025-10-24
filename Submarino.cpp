#include "Submarino.h"

Submarino::Submarino(string n, int c, double l, int a, int p, int t)
    : Embarcacion(n, c, l, a) {
    profundidadMax = p;
    tripulantes = t;
    cout << "Submarino creado: " << nombre << endl;
}

Submarino::~Submarino() {
    cout << "Submarino destruido: " << nombre << endl;
}

void Submarino::sumergir() {
    cout << nombre << " se sumerge hasta " << profundidadMax << " metros." << endl;
}

void Submarino::mostrarDatos() {
    cout << "\n=== DATOS DEL SUBMARINO ===" << endl;
    Embarcacion::mostrarDatos();
    cout << "Profundidad máxima: " << profundidadMax << " m" << endl;
    cout << "Tripulantes: " << tripulantes << endl;
}
