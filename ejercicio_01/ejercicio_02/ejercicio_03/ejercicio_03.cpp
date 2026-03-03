#include <iostream>
using namespace std;

int main() {
    const int LEER = 0b001;
    const int ESCRIBIR = 0b010;
    const int EJECUTAR = 0b100;

    int permisos;
    cout << "Ingrese valor de permisos (0-7): ";
    cin >> permisos;

    if (permisos & LEER)
        cout << "Permiso de LEER\n";
    if (permisos & ESCRIBIR)
        cout << "Permiso de ESCRIBIR\n";
    if (permisos & EJECUTAR)
        cout << "Permiso de EJECUTAR\n";

    return 0;
}

feat: resuelto ejercicio 03 - control de permisos con bitmask
