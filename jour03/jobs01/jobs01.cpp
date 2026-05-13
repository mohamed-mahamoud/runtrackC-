#include <iostream>
using namespace std;

int main(){
    string normal, majuscule;
    normal ="vive la plateforme";
        for (size_t i = 0; i < normal.size(); i++){
        if (normal[i] >= 'a' && normal[i] <= 'z'){
            majuscule += normal[i] - ('a' - 'A');
        }
        else{
            majuscule += normal[i];
        }
    }
    cout << majuscule << endl;

}