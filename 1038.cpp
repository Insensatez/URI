#include <iostream>

using namespace std;

int main(){
    int a, b;
    
    float valor;
    
    std::cin >> a >> b;
    cout.precision(2);
    cout << fixed;
    if(a == 1) valor = 4.00*b;
    else if(a == 2) valor = 4.50*b;
    else if(a == 3) valor = 5.00*b;
    else if(a == 4) valor = 2.00*b;
    else if(a == 5) valor = 1.50*b;
    
    cout << "Total: R$ " << valor << endl;
    return 0;
}
