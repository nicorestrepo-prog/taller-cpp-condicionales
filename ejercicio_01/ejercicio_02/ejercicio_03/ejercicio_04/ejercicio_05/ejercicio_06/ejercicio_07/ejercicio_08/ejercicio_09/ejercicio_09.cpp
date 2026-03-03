#include <iostream>
using namespace std;

int main() {
    double peso, altura;
    cout << "Ingrese peso (kg): ";
    cin >> peso;
    cout << "Ingrese altura (m): ";
    cin >> altura;

    double imc = peso/(altura*altura);

    if (imc < 18.5)
        cout << "Bajo peso";
    else if (imc < 25)
        cout << "Normal";
    else if (imc < 30)
        cout << "Sobrepeso";
    else if (imc < 35)
        cout << "Obesidad I";
    else
        cout << "Obesidad II";

    return 0;
}

feat: resuelto ejercicio 09 - analizador de IMC
