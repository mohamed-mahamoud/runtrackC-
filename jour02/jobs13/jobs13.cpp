#include <iostream>
using namespace std;
int main() {
    cout << "    I ";
    for (int i = 1; i <= 10; i++) {
        if (i < 10) cout << "  " << i << " ";
        else cout << " " << i << " ";
    }
    cout << endl;
    cout << "------";
    for (int i = 1; i <= 10; i++) cout << "----";
    cout << endl;
    for (int i = 1; i <= 10; i++) {
        if (i < 10) cout << "  " << i << "  I";
        else cout << " " << i << "  I";
        for (int j = 1; j <= 10; j++) {
            int val = i * j;
            if (val < 10) cout << "  " << val << " ";
            else if (val < 100) cout << " " << val << " ";
            else cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}