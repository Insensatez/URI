#include <iostream>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    cout.precision(3);
    cout << fixed << (b / 12.0) * a << endl;
    return 0;
}