#pragma once
#include <iostream>
using namespace std;

class Operation {
private:
    double valeur;
public:
    Operation(double v = 0) : valeur(v) {}

    Operation operator+(const Operation& other) const;
    Operation operator-(const Operation& other) const;
    Operation operator*(const Operation& other) const;
    Operation operator/(const Operation& other) const;

    double getValeur() const { return valeur; }
};