#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

struct Note {
	string nom;
	string prenom;
	float note;
};

void afficherMenu() {
	cout << "\nMenu :" << endl;
	cout << "1. Ajouter une note" << endl;
	cout << "2. Afficher la liste des notes" << endl;
	cout << "3. Supprimer une note d'un étudiant" << endl;
	cout << "4. Afficher la moyenne des notes" << endl;
	cout << "5. Quitter" << endl;
	cout << "Votre choix : ";
}

void ajouterNote(vector<Note>& notes) {
	Note n;
	cout << "Nom : ";
	cin >> n.nom;
	cout << "Prénom : ";
	cin >> n.prenom;
	cout << "Note : ";
	cin >> n.note;
	notes.push_back(n);
	cout << "Note ajoutée !" << endl;
}

void afficherNotes(const vector<Note>& notes) {
	if (notes.empty()) {
		cout << "Aucune note enregistrée." << endl;
		return;
	}
	cout << left << setw(15) << "Nom" << setw(15) << "Prénom" << setw(10) << "Note" << endl;
	for (const auto& n : notes) {
		cout << left << setw(15) << n.nom << setw(15) << n.prenom << setw(10) << n.note << endl;
	}
}

void supprimerNote(vector<Note>& notes) {
	string nom, prenom;
	cout << "Nom de l'étudiant à supprimer : ";
	cin >> nom;
	cout << "Prénom : ";
	cin >> prenom;
	for (auto it = notes.begin(); it != notes.end(); ++it) {
		if (it->nom == nom && it->prenom == prenom) {
			notes.erase(it);
			cout << "Note supprimée !" << endl;
			return;
		}
	}
	cout << "Étudiant non trouvé." << endl;
}

void afficherMoyenne(const vector<Note>& notes) {
	if (notes.empty()) {
		cout << "Aucune note pour calculer la moyenne." << endl;
		return;
	}
	float somme = 0;
	for (const auto& n : notes) {
		somme += n.note;
	}
	cout << "Moyenne des notes : " << (somme / notes.size()) << endl;
}

int main() {
	vector<Note> notes;
	int choix;
	do {
		afficherMenu();
		cin >> choix;
		switch (choix) {
			case 1:
				ajouterNote(notes);
				break;
			case 2:
				afficherNotes(notes);
				break;
			case 3:
				supprimerNote(notes);
				break;
			case 4:
				afficherMoyenne(notes);
				break;
			case 5:
				cout << "Au revoir !" << endl;
				break;
			default:
				cout << "Choix invalide." << endl;
		}
	} while (choix != 5);
	return 0;
}