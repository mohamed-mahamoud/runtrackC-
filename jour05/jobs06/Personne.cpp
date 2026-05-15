#include "Personne.hpp"

Personne::Personne(string nom, int PtnVie, float defence) {
    this->nom = nom;
    this->PtnVie = PtnVie;
    this->defence = defence;
}

void Personne::afficherInfos() const {
    cout << "Nom: " << nom << endl;
    cout << "Points de Vie: " << PtnVie << endl;
    cout << "Défense: " << defence << endl;
}

void Personne::setNom(const string& nom) {
    this->nom = nom;
}

string Personne::getNom() const {
    return nom;
}

void Personne::setPtnVie(int PtnVie) {
    this->PtnVie = PtnVie;
}
int Personne::getPtnVie() const {
    return PtnVie;
}

void Personne::setDefence(float defence) {
    this->defence = defence;
}
float Personne::getDefence() const {
    return defence;
}
