#include <iostream>
using namespace std;

struct Staff {
    string nom;
    string prenom;
};

int main() {
    Staff s1 = {"Cordial", "Alicia"};
    Staff s2 = {"Malardier", "Pierre"};

    cout << s1.prenom << " " << s1.nom << endl;
    cout << s2.prenom << " " << s2.nom << endl;
    

    struct Etudiant {
        string nom;
        string prenom;
    };

    int n;
    cout << "Combien d'etudiants ? ";
    cin >> n;
    cin.ignore();
    Etudiant* etudiants = new Etudiant[n];
    for (int i = 0; i < n; i++) {
        cout << "Nom de l'etudiant " << i+1 << " : ";
        cin >> etudiants[i].nom;
        cout << "Prenom de l'etudiant " << i+1 << " : ";
        cin >> etudiants[i].prenom;
    }
    cout << "\nPrenoms des etudiants : ";
    for (int i = 0; i < n; i++) {
        cout << etudiants[i].prenom << " ";
    }
    cout << endl;
    delete[] etudiants;
}