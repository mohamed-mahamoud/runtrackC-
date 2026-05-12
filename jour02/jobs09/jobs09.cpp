#include <iostream>
using namespace std;

int main(){
    int a,b,n;
    a=20;
    b=45;
    cout << "Entrez un nombre entier : ";
    cin >> n;
    if (n>=a && n<=b)
    {
        cout <<"GAGNE !" << endl;
    }
    else
    {
        cout <<"PERDU !" << endl;
    }
}