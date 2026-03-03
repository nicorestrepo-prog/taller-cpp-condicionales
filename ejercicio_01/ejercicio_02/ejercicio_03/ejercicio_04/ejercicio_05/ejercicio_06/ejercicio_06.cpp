#include <iostream>
using namespace std;

int main() {
    int a=5, b=3;

    cout << "Original: a=" << a << " b=" << b << endl;

    int temp=a;
    a=b;
    b=temp;
    cout << "Temporal: a=" << a << " b=" << b << endl;

    a=a+b;
    b=a-b;
    a=a-b;
    cout << "Aritmetico: a=" << a << " b=" << b << endl;

    a^=b;
    b^=a;
    a^=b;
    cout << "XOR: a=" << a << " b=" << b << endl;

    return 0;
}

feat: resuelto ejercicio 06 - swap con tres metodos
