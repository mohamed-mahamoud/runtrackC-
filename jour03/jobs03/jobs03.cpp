#include <iostream>
using namespace std;


int compare(string a, string b){
    if (a.size() != b.size()){
        return 1;
    }
    for (size_t i = 0; i < a.size(); i++){
        if (a[i] != b[i]){
            return 1;
        }
    }
    return 0;
}

int main(){
    string a,b;
    a="vive la plateforme";
    b="vive la plateforme";
    cout << compare(a,b) << endl;
}