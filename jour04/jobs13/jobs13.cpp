
#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Vol {
	string destination;
	float temps;
};

int main() {
	int n;
	cout << "Combien de destinations voulez-vous saisir ? ";
	cin >> n;
	cin.ignore();
	vector<Vol*> vols;
	for (int i = 0; i < n; i++) {
		Vol* v = new Vol;
		cout << "Destination " << i+1 << " : ";
		getline(cin, v->destination);
		cout << "Temps de vol depuis Marseille (en heures) : ";
		cin >> v->temps;
		cin.ignore();
		vols.push_back(v);
	}

	cout << "\nAffichage des vols :" << endl;
	for (size_t i = 0; i < vols.size(); i++) {
		cout << "Vol " << i+1 << ": " << vols[i]->destination << " - " << vols[i]->temps << "h" << endl;
	}

	// Exemple de modification : ajouter 1h à chaque vol
	for (size_t i = 0; i < vols.size(); i++) {
		vols[i]->temps += 1.0f;
	}

	cout << "\nAprès modification (temps +1h) :" << endl;
	for (size_t i = 0; i < vols.size(); i++) {
		cout << "Vol " << i+1 << ": " << vols[i]->destination << " - " << vols[i]->temps << "h" << endl;
	}

	// Libération mémoire
	for (size_t i = 0; i < vols.size(); i++) {
		delete vols[i];
	}
	return 0;
}
