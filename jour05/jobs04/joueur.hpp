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
        this->x += dx;
        this->y += dy;
    }

    void setX(int x) {
        this->x = x;
    }
    int getX() const {
        return this->x;
    }
    void setY(int y) {
        this->y = y;
    }
    int getY() const {
        return this->y;
    }
    void setName(const string& name) {
        this->name = name;
    }
    string getName() const {
        return this->name;
    }

    void afficherPosition() const {
        cout << "Joueur '" << this->name << "' - Position : (" << this->x << ", " << this->y << ")" << endl;
    }

};