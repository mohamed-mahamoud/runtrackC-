
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int valeurMax(const int* tab, int taille) {
	int max = tab[0];
	for (int i = 1; i < taille; i++) {
		if (tab[i] > max) max = tab[i];
	}
	return max;
}

int main() {
	int taille;
	cout << "Taille du tableau : ";
	cin >> taille;
	int* tab = new int[taille];
	for (int i = 0; i < taille; i++) {
		tab[i] = rand() % 100; // Remplir le tableau avec des valeurs aléatoires entre 0 et 99
	}
	int max = valeurMax(tab, taille);
	cout << "La valeur maximale est : " << max << endl;
	delete[] tab;
	return 0;
}
