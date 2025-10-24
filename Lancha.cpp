#include "Lancha.h"

Lancha::Lancha(string n, int c, double l, int a, int p, double comb)
    : Embarcacion(n, c, l, a) {
    potenciaMotor = p;
    combustible = comb;
    cout << "Lancha creada: " << nombre << endl;
}

Lancha::~Lancha() {
    cout << "Lancha destruida: " << nombre << endl;
}

void Lancha::acelerar() {
    if (combustible > 0) {
        cout << nombre << " está acelerando..." << endl;
        combustible -= 5;
    } else {
        cout << nombre << " no tiene combustible." << endl;
    }
}

void Lancha::mostrarDatos() {
    cout << "\n=== DATOS DE LA LANCHA ===" << endl;
    Embarcacion::mostrarDatos();
    cout << "Potencia del motor: " << potenciaMotor << " HP" << endl;
    cout << "Combustible: " << combustible << " litros" << endl;
}
