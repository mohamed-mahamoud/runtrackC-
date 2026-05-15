#include "joueur.hpp"


int main() {
    Joueur joueur;
    joueur.afficherPosition();
    joueur.deplacer(5, 3);
    joueur.afficherPosition();
    return 0;
}