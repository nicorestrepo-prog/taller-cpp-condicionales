#include <iostream>
using namespace std;

int main() {
    int nota;
    cout << "Ingrese nota (0-100): ";
    cin >> nota;

    if (nota >= 90)
        cout << "A - Aprobado";
    else if (nota >= 80)
        cout << "B - Aprobado";
    else if (nota >= 70)
        cout << "C - Aprobado";
    else if (nota >= 60)
        cout << "D - Aprobado";
    else
        cout << "F - Reprobado";

    return 0;
}
