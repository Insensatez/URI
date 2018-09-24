#include <iostream>

using namespace std;

int main(){
    int a, b;
    double c, d = 0;

    cin >> a >> b >> c;
    d = b * c ;
    
    cin >> a >> b >> c;
    d += b * c;
    
    cout.precision(2);

    cout << "VALOR A PAGAR: R$ " << fixed << d << endl;
    return 0;
}