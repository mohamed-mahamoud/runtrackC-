#include "Contact.hpp"

Contact::Contact(string name, int number) : name(name), number(number) {}

Contact::Contact(const Contact& other) : name(other.name), number(other.number) {}

void Contact::afficherContact() const {
    cout << "Nom: " << name << ", Numéro: " << number << endl;
}

void Contact::setName(const string& name) {
    this->name = name;
}
string Contact::getName() const {
    return name;
}

void Contact::setNumber(int number) {
    this->number = number;
}

int Contact::getNumber() const {
    return number;
}