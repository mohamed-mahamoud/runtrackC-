#include <iostream>

using namespace std;

int main() {

    static int tab[10];
    for (int i = 0; i < 10; i++) {
        tab[i] = i + 1;
    }
    int *ptr = tab;
    for (int i = 0; i < 10; i++) {
        cout <<"l'address de l'élément " << i << " est : " << ptr << " et la valeur est : " << *ptr << endl;
        ptr++;
    }
    return 0;}