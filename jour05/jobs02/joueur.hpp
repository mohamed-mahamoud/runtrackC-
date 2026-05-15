#include <iostream>
using namespace std;

class Joueur {
private:
    int x;
    int y;
public:
    Joueur() : x(0), y(0) {}
    Joueur(int xInit, int yInit) : x(xInit), y(yInit) {}
    void deplacer(int dx, int dy) {
        x += dx;
        y += dy;
    }
    void afficherPosition() const {
        cout << "Position du joueur : (" << x << ", " << y << ")" << endl;
    }

};