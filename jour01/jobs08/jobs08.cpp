#include <iostream>
using namespace std;

int main(){
    int i;
    cout << "Entrez une année : ";
    cin >> i;
    if (i % 4 == 0 && (i % 100 != 0 || i % 400 == 0)) {
        cout << "L'année " << i << " est bissextile." << endl;
    } else {
        cout << "L'année " << i << " n'est pas bissextile." << endl;
    }
    return 0;
}