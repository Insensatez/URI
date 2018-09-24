#include <iostream>

using namespace std;

int main(){
    int a, b;
    double c;
    
    cin >> a >> b >> c;
    cout.precision(2);

    cout << "NUMBER = " << a << endl << "SALARY = U$ " << fixed << b * c << endl;
    return 0;
}