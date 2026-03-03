#include <iostream>
using namespace std;

int main() {
    double celsius;
    cout << "Ingrese temperatura en Celsius: ";
    cin >> celsius;

    double fahrenheit = (celsius * 9.0/5.0) + 32;
    double kelvin = celsius + 273.15;
    double rankine = (celsius + 273.15) * 9.0/5.0;

    cout << fixed << setprecision(2);
    cout << "Fahrenheit: " << fahrenheit << endl;
    cout << "Kelvin: " << kelvin << endl;
    cout << "Rankine: " << rankine << endl;

    return 0;
}

feat: resuelto ejercicio 01 - conversor de temperatura
