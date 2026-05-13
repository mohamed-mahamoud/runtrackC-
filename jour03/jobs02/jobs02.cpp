#include <iostream>
using namespace std;

int main(){
    string normal="vive la plateforme";
    string sans_voyelle;
    for (size_t i = 0; i < normal.size(); i++){
        if (normal[i] != 'a' && normal[i] != 'e' && normal[i] != 'i' && normal[i] != 'o' && normal[i] != 'u'){
            sans_voyelle += normal[i];
        }
    }
    cout << sans_voyelle << endl;
}