#include <iostream>

using namespace std;

int main(){

    float a,b,c,d,e,media;

    std::cin >> a >> b >> c >> d;
    
    cout.precision(1);
    cout << fixed;

    media = (a*2 + b*3 + c*4 + d*1)/(10.0);
    cout << "Media: " << media << endl;

    if(media >= 7.0){
            cout << "Aluno aprovado." << endl;
    }
    if(media < 5.0){
            cout << "Aluno reprovado." << endl;
    }
    if(media >= 5.0 && media < 7.0){
        cout << "Aluno em exame." << endl;
        cin >> e;
        cout << "Nota do exame: " << e << endl;
        if((media + e)/2.0 >= 5.0){
            cout << "Aluno aprovado." << endl;
            cout << "Media final: " << ((media + e)/2.0) << endl;
        }else{
            cout << "Aluno reprovado." << endl;            
        }
    }
    return 0;
}