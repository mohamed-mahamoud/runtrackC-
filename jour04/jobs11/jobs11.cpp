#include <iostream>
#include <cstring>
using namespace std;

int main() {
    // Tableau de chaînes statiques
    const char* fruitsInit[5] = {"Pomme", "Banane", "Orange", "Fraise", "Kiwi"};
    char** fruits = (char**)malloc(5 * sizeof(char*));
    for (int i = 0; i < 5; i++) {
        fruits[i] = (char*)malloc(strlen(fruitsInit[i]) + 1);
        strcpy(fruits[i], fruitsInit[i]);
    }

    int taille;
    cout << "Vous avez combien de fruits favoris ?" << endl;
    cin >> taille;
    cin.ignore(); // Pour consommer le retour à la ligne

    char** favoris = (char**)malloc(taille * sizeof(char*));
    char buffer[100];
    for (int i = 0; i < taille; i++) {
        cout << "Entrez le fruit favori " << i + 1 << " : ";
        cin.getline(buffer, 100);
        favoris[i] = (char*)malloc(strlen(buffer) + 1);
        strcpy(favoris[i], buffer);
    }

    cout << "Vos fruits favoris sont : ";
    for (int i = 0; i < taille; i++) {
        cout << favoris[i] << " ";
    }
    cout << endl;

    // Libération de la mémoire
    for (int i = 0; i < 5; i++) {
        free(fruits[i]);
    }
    free(fruits);
    for (int i = 0; i < taille; i++) {
        free(favoris[i]);
    }
    free(favoris);

    return 0;
}