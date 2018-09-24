#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double raio, pi = 3.14159;

    cin >> raio;
    
    cout.precision(4);

    cout << "A=" << fixed << pi * pow(raio, 2) << endl;
    
    return 0;
}