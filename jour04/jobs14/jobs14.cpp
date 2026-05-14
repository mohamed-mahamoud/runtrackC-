#include <iostream>
using namespace std;

int main (){
    int x = 10;
    int& ref = x; // ref est une référence à x
    cout << "Valeur de x : " << x << endl; // Affiche 10
    ref = 20; // Modifie x via la référence
    cout << "Nouvelle valeur de x : " << x << endl; // Affiche
}