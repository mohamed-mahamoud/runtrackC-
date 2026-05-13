#include <iostream>
using namespace std;

int main(){
    string chaine;
    cout << "Entrez une chaine de caracteres : ";
    cin >> chaine;
    int taille = chaine.size();
    char* tab = new char[taille];
    for (int i = 0; i < taille; i++){
        tab[i] = chaine[i];
    }
    tab[taille] = '\0';
    cout << "La chaine de caracteres est : " << tab << endl;
    delete[] tab;
}