#include <iostream>

using namespace std;

int main(){
    int a;
    double b;

    cin >> a >> b;
    cout.precision(3);
    cout << fixed << a / b << " km/l" << endl;

    return 0;
}