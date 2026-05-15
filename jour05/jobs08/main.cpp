#include "Chat.cpp"
#include "Chien.cpp"

int main() {
    Chat monChat;
    Chien monChien;

    cout << "Le chat : ";
    monChat.crier();
    monChat.manger();

    cout << "Le chien : ";
    monChien.crier();
    monChien.manger();

    return 0;
}