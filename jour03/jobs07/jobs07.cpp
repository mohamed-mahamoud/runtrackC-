#include <iostream>
using namespace std;

int main(){
    int T[10];
    for (int i = 0; i < 10; i++){
        cout << "Entrez un nombre : ";
        cin >> T[i];
    }

    int max=0;
    for (int i = 0; i < 10; i++){
        if (T[i]>max){
            max=T[i];
        }
    }
    cout<<"Le maximum est : "<<max<<endl;
}