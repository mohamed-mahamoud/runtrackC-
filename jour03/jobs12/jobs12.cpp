#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int choixnombre(){
    srand(time(0));
    return rand() % 101;
}

int main(){
    int nombre = choixnombre();
    int vie = 5;
    int guess;    
    while (vie > 0){
        cout << "Entrez un nombre entre 0 et 100 : ";
        cin >> guess;
        if (guess == nombre){
            cout << "Bravo, vous avez trouve le nombre !" << endl;
            return 0;
        } else if (guess < nombre){
            cout << "Le nombre est plus grand que " << guess << endl;
        } else {
            cout << "Le nombre est plus petit que " << guess << endl;
        }
        vie--;
    }
    cout << "Désolé, vous avez épuisé vos chances. Le nombre était " << nombre << endl;
    return 0;
}