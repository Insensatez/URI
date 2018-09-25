#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double a, b, c;

    cin >> a >> b >> c;

    if((pow(b,2) - 4*a*c) < 0 || 2*a == 0)
        cout << "Impossivel calcular" << endl;
    else{
        cout.precision(5);
        cout << "R1 = " << fixed << ((-b) + sqrt((pow(b,2) - 4*a*c)))/(2*a) << endl;
        cout << "R2 = " << fixed << ((-b) - sqrt((pow(b,2) - 4*a*c)))/(2*a) << endl;
    }
    return 0;
}