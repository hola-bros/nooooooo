#include "Embarcacion.h"

Embarcacion::Embarcacion(string n, int c, double l, int a) {
    nombre = n;
    capacidad = c;
    longitud = l;
    anioFabricacion = a;
    cout << "Se ha creado la embarcación: " << nombre << endl;
}

Embarcacion::~Embarcacion() {
    cout << "Se ha destruido la embarcación: " << nombre << endl;
}

void Embarcacion::mostrarDatos() {
    cout << "\n--- DATOS DE LA EMBARCACIÓN ---" << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Capacidad: " << capacidad << " personas" << endl;
    cout << "Longitud: " << longitud << " metros" << endl;
    cout << "Año de fabricación: " << anioFabricacion << endl;
}
