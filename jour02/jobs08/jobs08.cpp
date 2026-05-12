#include <iostream>
using namespace std;

int main(){
    int a,b;
    int i =0;
    do
    {   
    cout <<"quel entier pour commencer ? ";
    cin >> a;
    cout <<"quel entier pour terminer ? ";
    cin >> b;}
    while (a>b);
    while(i<=b)
    {
        cout << i << endl;
        i++;
    }
}