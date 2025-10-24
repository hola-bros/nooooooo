#include <iostream>
#include "Velero.h"
#include "Lancha.h"
#include "Submarino.h"
using namespace std;

int main() {
    string nombre, material;
    int capacidad, anio, velas, potencia, prof, trip;
    double longitud, combustible;

    cout << "=== REGISTRO DE EMBARCACIONES ===" << endl;

    cin.ignore();
    cout << "\n--- VELERO ---" << endl;
    cout << "Nombre: ";
    getline(cin, nombre);
    cout << "Capacidad: ";
    cin >> capacidad;
    cout << "Longitud (m): ";
    cin >> longitud;
    cout << "Año de fabricación: ";
    cin >> anio;
    cout << "Número de velas: ";
    cin >> velas;
    cin.ignore();
    cout << "Material del mástil: ";
    getline(cin, material);

    Velero v(nombre, capacidad, longitud, anio, velas, material);
    v.mostrarDatos();
    v.izarVelas();


    cout << "\n--- LANCHA ---" << endl;
    cin.ignore();
    cout << "Nombre: ";
    getline(cin, nombre);
    cout << "Capacidad: ";
    cin >> capacidad;
    cout << "Longitud (m): ";
    cin >> longitud;
    cout << "Año de fabricación: ";
    cin >> anio;
    cout << "Potencia (HP): ";
    cin >> potencia;
    cout << "Combustible inicial (L): ";
    cin >> combustible;

    Lancha l(nombre, capacidad, longitud, anio, potencia, combustible);
    l.mostrarDatos();
    l.acelerar();


    cout << "\n--- SUBMARINO ---" << endl;
    cin.ignore();
    cout << "Nombre: ";
    getline(cin, nombre);
    cout << "Capacidad: ";
    cin >> capacidad;
    cout << "Longitud (m): ";
    cin >> longitud;
    cout << "Año de fabricación: ";
    cin >> anio;
    cout << "Profundidad máxima (m): ";
    cin >> prof;
    cout << "Tripulantes: ";
    cin >> trip;

    Submarino s(nombre, capacidad, longitud, anio, prof, trip);
    s.mostrarDatos();
    s.sumergir();

    cout << "\n=== Fin del programa ===" << endl;
    return 0;
}
