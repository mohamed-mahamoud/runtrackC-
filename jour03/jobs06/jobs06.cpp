#include <iostream>
using namespace std;

int main(){
    int T[10];
    for (int i = 0; i < 10; i++){
        cout << "Entrez un nombre : ";
        cin >> T[i];
    }

    for (int i = 0; i < 10; i++){
        if (T[i]>=5){
            cout<<T[i]<<endl;
        }
    }
}