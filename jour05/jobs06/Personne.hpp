#pragma once
#include <iostream>
using namespace std;

class Personne {
private:
    string nom;
    int PtnVie;
    float defence;
public:
    Personne(string nom, int PtnVie, float defence);
    void afficherInfos() const;
    void setNom(const string& nom);
    string getNom() const;
    void setPtnVie(int PtnVie);
    int getPtnVie() const;
    void setDefence(float defence);
    float getDefence() const;
    
};
