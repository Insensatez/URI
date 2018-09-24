#include <iostream>

using namespace std;

int main(){
    int dias;
    cin >> dias;
    
    int ano = dias / 365 ;
    int mes = (dias - (ano * 365)) / 30;
    int dia = (dias - (ano * 365)) % 30;

    cout << ano << " ano(s)" << endl;
    cout << mes << " mes(es)" << endl;
    cout << dia << " dia(s)" << endl;
    return 0;    
}