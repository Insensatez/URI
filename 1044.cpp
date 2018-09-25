#include <iostream>
#include <algorithm>    // std::swap

using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    if(a < b){ swap(a, b); }
    a % b == 0 ? cout << "Sao Multiplos" << endl : cout << "Nao sao Multiplos" << endl;    
    return 0;   
}