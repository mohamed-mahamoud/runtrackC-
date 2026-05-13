#include <iostream>
using namespace std;

bool compare(string s1, string s2){
    int taille1 = s1.size();
    int taille2 = s2.size();
    if (taille1 != taille2){
        return false;
    }
    for (int i = 0; i < taille1; i++){
        if (s1[i] != s2[i]){
            return false;
        }
    }
    return true;
}

int main(){
    string s1, s2;
    cout << "Entrez la premiere chaine de caracteres : ";
    cin >> s1;
    cout << "Entrez la deuxieme chaine de caracteres : ";
    cin >> s2;
    if (compare(s1, s2)){
        cout << "Les chaines de caracteres sont identiques." << endl;
    } else {
        cout << "Les chaines de caracteres sont differentes." << endl;
    }
}