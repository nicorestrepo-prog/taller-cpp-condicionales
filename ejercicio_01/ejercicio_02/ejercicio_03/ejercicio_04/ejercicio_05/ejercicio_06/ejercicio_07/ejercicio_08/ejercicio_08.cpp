#include <iostream>
using namespace std;

int main() {
    double saldo = 1000;
    int opcion;
    int transacciones = 0;

    cout << "1.Depositar 2.Retirar 3.Consultar: ";
    cin >> opcion;

    switch(opcion) {
        case 1: {
            double monto;
            cin >> monto;
            saldo += monto;
            transacciones++;
            break;
        }
        case 2: {
            double monto;
            cin >> monto;
            if (monto <= saldo) {
                saldo -= monto;
                transacciones++;
            } else
                cout << "Fondos insuficientes\n";
            break;
        }
        case 3:
            cout << "Saldo: " << saldo << endl;
            break;
    }

    cout << "Transacciones: " << transacciones;
    return 0;
}

feat: resuelto ejercicio 08 - simulador de cajero ATM}
