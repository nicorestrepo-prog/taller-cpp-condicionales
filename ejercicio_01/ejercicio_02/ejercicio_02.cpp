#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cout << "Ingrese tres lados: ";
    cin >> a >> b >> c;

    if (a+b>c && a+c>b && b+c>a) {

        if (a==b && b==c)
            cout << "Equilatero\n";
        else if (a==b || a==c || b==c)
            cout << "Isosceles\n";
        else
            cout << "Escaleno\n";

        double mayor = max(a, max(b,c));
        double sumaCuadrados = pow(a,2)+pow(b,2)+pow(c,2)-pow(mayor,2);

        if (pow(mayor,2)==sumaCuadrados)
            cout << "Rectangulo\n";
        else if (pow(mayor,2)<sumaCuadrados)
            cout << "Acutangulo\n";
        else
            cout << "Obtusangulo\n";
    }
    else
        cout << "No es un triangulo valido\n";

    return 0;
}

feat: resuelto ejercicio 02 - clasificador de triangulos

