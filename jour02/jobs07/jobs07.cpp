#include <iostream>
using namespace std;

int main(){
    int a,b;
    do
    {   
    cout <<"quel entier pour commencer ? ";
    cin >> a;
    cout <<"quel entier pour terminer ? ";
    cin >> b;}
    while (a>b);
    for (int i=a; i<=b; i++)
    {
        cout << i << endl;
    }
}