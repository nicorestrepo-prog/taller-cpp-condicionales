#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a,b;
    char op;

    cout << "Ingrese primer numero: ";
    cin >> a;
    cout << "Ingrese operador (+ - * / %): ";
    cin >> op;
    cout << "Ingrese segundo numero: ";
    cin >> b;

    switch(op) {
        case '+': cout << a+b; break;
        case '-': cout << a-b; break;
        case '*': cout << a*b; break;
        case '/':
            if (b!=0)
                cout << a/b;
            else
                cout << "Error: division por cero";
            break;
        case '%':
            if (b!=0)
                cout << fmod(a,b);
            else
                cout << "Error: modulo por cero";
            break;
        default:
            cout << "Operador invalido";
    }

    return 0;
}

}
