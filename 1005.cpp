#include <iostream>

using namespace std;

int main(){
    double a, b;
    
    cin >> a >> b;

    cout.precision(5);

    cout << "MEDIA = " << fixed << ((a * 3.5) + (b * 7.5)) / 11 << endl;
  return 0;
}