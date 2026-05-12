#include <iostream>
using namespace std;

int main(){
    int i,n,som;
    som=0;
    i=0;
    do {
        cout << "donner un entier : ";
        cin >> n;
        som+=n;
        i++;
    } while (i<4);
    cout << "La somme est : " << som << endl;
}