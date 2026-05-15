#include "Etudiant.hpp"

Etudiant::Etudiant() {
    this->nom = "Doe";
    this->prenom = "John";
    this->age = 18;
    this->matricule = 0;
}

Etudiant::Etudiant(string nom, string prenom, int age, int matricule) {
    this->nom = nom;
    this->prenom = prenom;
    this->age = age;
    this->matricule = matricule;
}

void Etudiant::afficherInformations() const {
    cout << "Nom: " << this->nom << endl;
    cout << "Prénom: " << this->prenom << endl;
    cout << "Âge: " << this->age << endl;
    cout << "Matricule: " << this->matricule << endl;
}

void Etudiant::setNom(const string& nom) {
    this->nom = nom;
}

string Etudiant::getNom() const {
    return this->nom;
}

void Etudiant::setPrenom(const string& prenom) {
    this->prenom = prenom;
}

string Etudiant::getPrenom() const {
    return this->prenom;
}

void Etudiant::setAge(int age) {
    this->age = age;
}

int Etudiant::getAge() const {
    return this->age;
}

void Etudiant::setMatricule(int matricule) {
    this->matricule = matricule;
}

int Etudiant::getMatricule() const {
    return this->matricule;
}

