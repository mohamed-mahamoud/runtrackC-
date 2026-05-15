#include "Operation.hpp"

Operation Operation::operator+(const Operation& other) const {
    return Operation(this->valeur + other.valeur);
}
Operation Operation::operator-(const Operation& other) const {
    return Operation(this->valeur - other.valeur);
}
Operation Operation::operator*(const Operation& other) const {
    return Operation(this->valeur * other.valeur);
}
Operation Operation::operator/(const Operation& other) const {
    if (other.valeur == 0) {
        cerr << "Erreur : Division par zéro!" << endl;
        return Operation(0);
    }
    return Operation(this->valeur / other.valeur);
}