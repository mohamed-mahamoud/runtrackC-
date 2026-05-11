#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "Entrez un nombre : ";
    cin >> N;
    for (int i =5; i <= N; i ++)
    {
        cout <<"la valeur au cube de " << i << " est : " << i * i * i << endl;
    }
    return 0;
}