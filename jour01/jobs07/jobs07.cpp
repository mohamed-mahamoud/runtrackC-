#include <iostream>
using namespace std;

int main(){
    int i;
    cout << "Entrez un nombre entier : ";
    cin >> i;
    if (i % 2 == 0) {
        cout << "Le nombre " << i << " est pair." << endl;
    } else {
        cout << "Le nombre " << i << " est impair." << endl;
    }
    return 0;
}