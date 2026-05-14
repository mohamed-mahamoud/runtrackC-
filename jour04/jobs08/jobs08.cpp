#include <iostream>
using namespace std;

int main(){

    string tab[4]={"2019","La plateforme", "3.14", "Etudiant"};

    string *ptr = tab;
    for (int i = 0; i < 4; i++) {
        cout <<"l'address de l'élément " << i << " est : " << ptr << " et la valeur est : " << *ptr << endl;
        ptr++;
    }
    return 0;
}