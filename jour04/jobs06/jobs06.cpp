#include <iostream>
using namespace std;

int main()
{
    int entier=17;
    float flottant=3.14;
    double reel=123.345;
    string caractere="La Plateforme";
    cout << "L'address de l'entier est : " << &entier <<"et la valeur est : " << entier << endl;
    cout << "L'address du flottant est : " << &flottant << "et la valeur est : " << flottant << endl;
    cout << "L'address du double est : " << &reel << "et la valeur est : " << reel << endl;
    cout << "L'address de la chaîne est : " << &caractere << "et la valeur est : " << caractere << endl;
}