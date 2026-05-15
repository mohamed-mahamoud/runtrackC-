#pragma once
#include <iostream>
using namespace std;

class Animal {
protected:
	static int compteur;
	int totalAnimaux;
public:
	Animal() {
		compteur++;
		totalAnimaux = compteur;
	}
	virtual void crier() const = 0;
	virtual void manger() const = 0;
	virtual ~Animal() {}
	static int getCompteur() { return compteur; }
	int getTotalAnimaux() const { return totalAnimaux; }
};
