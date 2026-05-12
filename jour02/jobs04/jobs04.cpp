#include <iostream>
using namespace std;

int main(){
    int a,b;
    char op;
    cout << "Entrez une operation (ex: 5 + 3) : ";
    cin >> a >> op >> b;
    switch(op)
    {
        case '+': cout << a << " + " << b << " = " << a+b << endl; break;
        case '-': cout << a << " - " << b << " = " << a-b << endl; break;
        case '*': cout << a << " * " << b << " = " << a*b << endl; break;
        case '/': 
            if(b != 0)
                cout << a << " / " << b << " = " << a/b << endl; 
            else
                cout << "Erreur : division par zero" << endl;
            break;
        default: cout << "Operateur inconnu" << endl; break;
    }
    return 0;
}