#include <iostream>
using namespace std;

int main(){

    string nombre;
    cout << "Entrez un nombre : ";
    cin >> nombre;
    string inverse;
    for (int i = nombre.length() - 1; i >= 0; i--){
        inverse += nombre[i];
    }
    cout << "L'inverse du nombre est : " << inverse << endl;
    return 0;
}