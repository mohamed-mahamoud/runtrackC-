#include <iostream>
using namespace std;

class Joueur {
private:
    int x;
    int y;
    public:
    Joueur() : x(0), y(0) {}
    void deplacer(int dx, int dy) {
        x += dx;
        y += dy;
    }
    void afficherPosition() const {
        cout << "Position du joueur : (" << x << ", " << y << ")" << endl;
    }

};