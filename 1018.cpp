#include <iostream>

using namespace std;

int main(){

    int dinheiro, dif = 0;

    cin >> dinheiro;
       
    int cem = dinheiro/100;      
    
    dif = (dinheiro-cem*100);       
    int cinquenta = dif/50;
    
    dif -= cinquenta*50;
    int vinte = dif/20;
    
    dif -= vinte*20;
    int dez = dif/10;
    
    dif -= dez*10;
    int cinco = dif/5;
    
    dif -= cinco*5;
    int dois = dif/2;
    
    dif -= dois*2;
    int um = dif;
    
    cout << dinheiro << endl;
    cout << cem << " nota(s) de R$ 100,00" << endl;
    cout <<  cinquenta << " nota(s) de R$ 50,00" << endl;
    cout <<  vinte << " nota(s) de R$ 20,00" << endl;
    cout <<  dez << " nota(s) de R$ 10,00" << endl;
    cout <<  cinco << " nota(s) de R$ 5,00" << endl;
    cout <<  dois << " nota(s) de R$ 2,00" << endl;
    cout <<  um << " nota(s) de R$ 1,00" << endl;
    
    return 0;
}