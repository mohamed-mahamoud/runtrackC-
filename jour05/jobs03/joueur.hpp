#include <iostream>
using namespace std;

class Joueur {
private:
    int x;
    int y;
    string name;
public:
    Joueur()
    {
        this->x=0;
        this->y=0;
        this->name="Player1";
    }


    Joueur(int x=0, int y=0){
        this->x = x;
        this->y = y;
        this->name="Player1";       
    }

    Joueur(int x,int y,string name){
        this->x = x;
        this->y = y;
        this->name = name;
    }


    void deplacer(int dx, int dy) {
        x += dx;
        y += dy;
    }
    void afficherPosition() const {
        cout << "Joueur '" << name << "' - Position : (" << x << ", " << y << ")" << endl;
    }

};