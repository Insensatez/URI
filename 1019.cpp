#include <iostream>

using namespace std;

int main(){
    int segundos;
    cin >> segundos;
    
    int segundo = segundos % 60;
    int minutos = segundos / 60;
    int minuto = minutos % 60;
    int hora = minutos / 60;
    
    cout << hora << ":" << minuto << ":" << segundo << endl;

    return 0;
}