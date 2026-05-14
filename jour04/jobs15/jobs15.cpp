#include <iostream>
using namespace std;

int main()
{
    int tab[5] = {1, 2, 3, 4, 5};
    int& ref = tab[0]; // ref est une référence au premier élément du tableau
    for (int i = 0; i < 5; i++) {
        cout << "Valeur de l'élément " << i << " : " << ref << endl;
        ref++; // Incrémente la valeur via la référence
    }
}