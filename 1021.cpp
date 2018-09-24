#include <iostream>
#include <vector>

using namespace std;

int main(){
    double valor;

    vector<int> notas;
    notas.push_back(100);
    notas.push_back(50);
    notas.push_back(20);
    notas.push_back(10);
    notas.push_back(5);
    notas.push_back(2);

    vector<double> moedas;
    moedas.push_back(1.00);
    moedas.push_back(0.50);
    moedas.push_back(0.25);
    moedas.push_back(0.10);
    moedas.push_back(0.05);
    moedas.push_back(0.01);
    
    cin >> valor;
    valor += 0.001; // ajuste de precisão

    cout.precision(2);
    cout << fixed;
    
    cout << "NOTAS:" << endl;    
    for(unsigned int i = 0; i < notas.size(); i++){       
        cout <<  ((int)(valor / notas[i])) << " nota(s) de R$ "<<  notas[i] << ".00" << endl;
        valor -= ((int)(valor / notas[i])) * notas[i];        
    }

    cout << "MOEDAS:" << endl;   
    for(unsigned int i = 0; i < moedas.size(); i++){           
        cout <<  ((int)(valor / moedas[i])) << " moeda(s) de R$ "<<  moedas[i]<< endl;
        valor -= ((int)(valor / moedas[i])) * moedas[i];                
    }
    
    return 0;   
}