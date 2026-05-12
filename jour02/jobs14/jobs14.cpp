#include <iostream>
using namespace std;
int main() {
    int n;
    int narcissique = 0;
    do {
        cout << "donner un nombre entier";
        cin >> n;
    } while (n <= 0);
    int temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        narcissique += digit * digit * digit;
        temp /= 10;
    }
    if (narcissique == n) {
        cout << n << " est un nombre narcissique." << endl;
    } else {
        cout << n << " n'est pas un nombre narcissique." << endl;
    }
    return 0;
}