#include <iostream>
using namespace std;

int main(){
    int n;
    int fac=1;
    do {
        cout << "Entrez un nombre entier a factoriser : ";
        cin >> n;
        if (n < 0)
        {
            cout << "Un nombre positif, s'il vous plaît." << endl;
        }
    }
    while (n < 0);
    for (int i=1; i<=n; i++)
    {
        fac*=i;
    }
    cout << "La factorielle de " << n << " est " << fac << "." << endl;
}