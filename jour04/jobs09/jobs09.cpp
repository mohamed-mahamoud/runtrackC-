#include <iostream>

using namespace std;
int main(){
    int taille;
    cout << "Entrez la taille du tableau : ";
    cin >> taille;
    int *tab = (int*)malloc(taille * sizeof(int));
    for (int i = 0; i < taille; i++) {
        cout << "Entrez l'élément " << i + 1 << " : ";
        cin >> tab[i];
    }
    cout << "Le tableau saisi est : ";
    for (int i = 0; i < taille; i++) {
        cout << tab[i] << " ";
    }
    free(tab);
    return 0;
}