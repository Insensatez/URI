#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int a;

    cin >> a;
    cout.precision(3);
    cout << "VOLUME = " << fixed << (4.0/3.0) * 3.14159 *  pow(a, 3) << endl;
    return 0;
}