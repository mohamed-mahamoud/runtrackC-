#include <iostream>
using namespace std;

bool is_valid_time(const string& time) {
    if (time.size() != 5 || time[2] != ':') {
        return false;
    }
    if (!isdigit(time[0]) || !isdigit(time[1]) || !isdigit(time[3]) || !isdigit(time[4])) {
        return false;
    }
    return true;
}

int main(){
    string heure;
    do {
    cout << "Entrez une heure au format HH:MM : ";
    cin >> heure;
    if (!is_valid_time(heure)) {
        cout << "Format d'heure invalide. Veuillez réessayer." << endl;}
    } while (!is_valid_time(heure));
}