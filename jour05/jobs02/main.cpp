#include "joueur.hpp"


int main() {
    Joueur joueur(10, 15);
    joueur.afficherPosition();
    joueur.deplacer(5, 3);
    joueur.afficherPosition();
    return 0;
}