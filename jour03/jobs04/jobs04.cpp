#include <iostream>
using namespace std;

void calcule_longeur(string str){
    int longeur = 0;
    for (size_t i = 0; i < str.size(); i++){
        if (str[i] != ' '){
            longeur++;
        }
    }
    cout <<"la taille est " <<longeur << endl;
}

int main(){
    string str;
    str="vive la plateforme !";
    calcule_longeur(str);
}