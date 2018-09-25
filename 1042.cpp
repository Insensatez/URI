#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int a, b, c;
    vector<int> vet;

    cin >> a >> b >> c;

    vet.push_back(a); vet.push_back(b); vet.push_back(c);

    sort(vet.begin(), vet.end());

    for (vector<int>::iterator it = vet.begin(); it != vet.end(); it++){
        cout << *it << endl;        
    }

    cout << endl;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    return 0;
}