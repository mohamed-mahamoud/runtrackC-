#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "Entrez un nombre : ";
    cin >> N;
    int somme = 0;
    for (int i =5; i <= N; i ++)
    {
        somme+=somme+i*i*i;
        cout <<"la valeur au cube de " << i << " est : " << i * i * i << endl;
    }
    cout << "La somme des cubes est : " << somme << endl;
    return 0;
}