#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    a = 5;
    b = 10;
    c = 25;
    int *p1 = &a;
    int *p2 = &b;
    int *p3 = &c;

    // Modifier les valeurs via les pointeurs
    *p1 = 15;
    *p2 = 20;
    *p3 = 30;

    // Afficher les nouvelles valeurs
    cout << "Nouvelle valeur de a : " << a << endl;
    cout << "Nouvelle valeur de b : " << b << endl;
    cout << "Nouvelle valeur de c : " << c << endl;
}