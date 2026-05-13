#include <iostream>
using namespace std;

int sumEven(int tab[]){
    int somme = 0;
    for (int i = 0; i < 5; i++){
        if (tab[i] % 2 == 0){
            somme += tab[i];
        }
    }
    return somme;
}

int main(){
    int tab[5]={1, 2, 3, 4, 5};
    cout << sumEven(tab) << endl;
}