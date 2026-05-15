#pragma once
#include <iostream>
using namespace std;

class Etudiant {
    private:
        string nom;
        string prenom;
        int age;
        int matricule;
    public:
        Etudiant();
        Etudiant(string nom, string prenom, int age, int matricule);
        void afficherInformations() const;
        void setNom(const string& nom);
        string getNom() const;
        void setPrenom(const string& prenom);
        string getPrenom() const;
        void setAge(int age);
        int getAge() const;
        void setMatricule(int matricule);
        int getMatricule() const;
};
