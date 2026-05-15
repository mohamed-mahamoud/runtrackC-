#include "Chat.cpp"
#include "Chien.cpp"

int main() {
    Chat monChat;
    cout << "Nombre total d'animaux : " << monChat.getCompteur() << endl;   
 
    Chien monChien;
    cout << "Nombre total d'animaux : " << monChien.getCompteur() << endl;

    Chat monChat2;
    cout << "Nombre total d'animaux : " << monChat2.getCompteur() << endl;


    Chien monChien2;
    cout << "Nombre total d'animaux : " << monChien2.getCompteur() << endl;
    cout << "Le chat : ";
    monChat.crier();
    monChat.manger("des croquettes");


    cout << "Le chien : ";
    monChien.crier();
    monChien.manger();

    return 0;
}