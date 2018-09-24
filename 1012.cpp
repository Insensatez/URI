#include <iostream>
#include <cmath>

using namespace std;

int main(){
    cout.precision(3);
    cout << fixed;

    double a,b ,c;

    cin >> a >> b >> c;

    cout << "TRIANGULO: " << a * c / 2 << endl;
    cout << "CIRCULO: " << 3.14159 * pow(c ,2) << endl;
    cout << "TRAPEZIO: " << ((a + b) * c) / 2 << endl;
    cout << "QUADRADO: " << pow(b, 2) << endl;
    cout << "RETANGULO: " << a * b << endl;

    return 0;
}