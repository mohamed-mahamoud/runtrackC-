#include <iostream>
using namespace std;

int main (){
    float note;
    do {
        cout << "Entrez une note entre 0 et 20 : ";
        cin >> note;
        if(note < 0 || note > 20)
            cout << "Note invalide, essayez encore." << endl;
    } while (note < 0 || note > 20);
    if (note >=10)
        cout << "validé" << endl;
    else
        cout << "non validé" << endl;


}