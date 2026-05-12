#include <iostream>
using namespace std;
int main() {
    int n;
    do {
        cout << "donner un  nombre entier : ";
        cin >> n;
    } while (n <= 0);
        double fibonacci = 0;
    for (int i = 1; i <= n; i++) {
        if (i == 1 || i == 2) {
            fibonacci = 1;
            cout <<  fibonacci << endl;
        } else {
            double a = 1, b = 1;
            for (int j = 3; j <= i; j++) {
                double temp = a + b;
                a = b;
                b = temp;
            }
            fibonacci = b;
            cout <<fibonacci << endl;
        }
    }
}