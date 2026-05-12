#include <iostream>
using namespace std;

int main(){
    int n,i;
    i=0;
    cout << "Entrez un nombre entier : ";
    cin >> n;
    while(i<=n)
    {

        if (i%3==0)
            cout << i << " est un multiple de 3" << endl;
        if (i%5==0)
            cout << i << " est un multiple de 5" << endl;
        i++;
    }

}