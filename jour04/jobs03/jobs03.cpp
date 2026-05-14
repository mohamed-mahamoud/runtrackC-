#include <iostream>

using namespace std;

int main() {
    string mot;
    cout << "Entrez une chaîne de caractères : ";
    cin >> mot;
    char *ptr = &mot[0];
    string inverser = "";
    for (int i = mot.size() - 1; i >= 0; i--) {
        inverser += *(ptr + i);
    }
    cout << "La chaîne inversée est : " << inverser << endl;
    return 0;
}