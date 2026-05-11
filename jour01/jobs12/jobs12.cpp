#include <iostream>
using namespace std;

int main() {
    int a[5];
    for (int i = 0; i < 5; i++) {
        cout << "Entrez un nombre : ";
        cin >> a[i];
    }
    float moyenne;
    for (int i = 0; i < 5; i++) {
        moyenne += a[i];
    }
    moyenne /= 5;
    cout << "La moyenne est : " << moyenne << endl;
    return 0;
}