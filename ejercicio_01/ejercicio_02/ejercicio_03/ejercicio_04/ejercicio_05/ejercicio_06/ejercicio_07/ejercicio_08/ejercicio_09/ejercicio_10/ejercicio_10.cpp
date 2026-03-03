#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    char tipo, cupon;
    double monto;
    bool finSemana;

    cout << "Tipo cliente (V/N): ";
    cin >> tipo;
    cout << "Monto compra: ";
    cin >> monto;
    cout << "Codigo cupon (A/B/C): ";
    cin >> cupon;
    cout << "Es fin de semana? (1=Si 0=No): ";
    cin >> finSemana;

    double descuento = 0;

    if (tipo=='V') descuento += 0.20;
    if (monto>200) descuento += 0.10;
    if (finSemana) descuento += 0.05;

    switch(cupon) {
        case 'A': descuento += 0.05; break;
        case 'B': descuento += 0.10; break;
        case 'C': descuento += 0.15; break;
    }

    descuento = min(descuento, 0.50);

    double precioFinal = monto*(1-descuento);

    cout << "Precio final: " << precioFinal;

    return 0;
}

feat: resuelto ejercicio 10 - mini motor de reglas de negocio

