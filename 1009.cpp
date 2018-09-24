#include <iostream>

using namespace std;

int main(){
    string a;
    double b, c;
    
    cin >> a >> b >> c;
    cout.precision(2);

    cout << "TOTAL = R$ " << fixed << (b + (c *0.15)) << endl;
    return 0;
}