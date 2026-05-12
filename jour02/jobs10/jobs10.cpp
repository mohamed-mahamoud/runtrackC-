#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double n;
    do {
    do {
        cout << "Entrez un nombre  : ";
        cin >> n;
        if (n<0)
        {
            cout <<"Un nombre positif, s'il vous plaît." << endl;
        }
    }
    while (n < 0);
    
    cout << "La racine carrée de " << n << " est " << sqrt(n) << "." << endl;
    }
    while (n != 0.0);

}
