#include <iostream>
using namespace std;

int main(){
    int n;
    double harmonique = 1;
    do {
        cout << "donner un nombre entier";
        cin >> n;
    } while (n <= 0);
    for (int i=2; i<=n; i++)
    {
        harmonique += 1.0/i;
    }
    cout << "La somme harmonique de " << n << " est " << harmonique << "." << endl;
    return 0;
}