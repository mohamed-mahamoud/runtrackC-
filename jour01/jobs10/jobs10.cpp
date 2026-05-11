#include <iostream>
using namespace std;

int main(){
    int p;
    cout << "Entrez un prix hors taxe : ";
    cin >> p;
    cout << "Le prix TTC est de : " << p+(p * 0.15) << " euros" << endl;
    return 0;
}