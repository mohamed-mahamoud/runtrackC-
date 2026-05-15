#include "Chat.hpp"

void Chat::crier() const {
    cout << " Miaou!" << endl;
}

void Chat::manger() const {
    cout << "Le chat mange." << endl;
}

void Chat::manger(const string& nourriture) const {
    cout << "Le chat mange " << nourriture << "." << endl;
}