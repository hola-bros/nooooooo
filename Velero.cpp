#include "Velero.h"

Velero::Velero(string n, int c, double l, int a, int v, string m)
    : Embarcacion(n, c, l, a) {
    numVelas = v;
    materialMastil = m;
    cout << "Velero creado: " << nombre << endl;
}

Velero::~Velero() {
    cout << "Velero destruido: " << nombre << endl;
}

void Velero::izarVelas() {
    cout << nombre << " ha izado sus velas." << endl;
}

void Velero::mostrarDatos() {
    cout << "\n=== DATOS DEL VELERO ===" << endl;
    Embarcacion::mostrarDatos();
    cout << "Número de velas: " << numVelas << endl;
    cout << "Material del mástil: " << materialMastil << endl;
}
