#include <iostream>
using namespace std;

bool isPalindrome(string str) {
    int left = 0, right = str.length() - 1;
    while (left < right) {
        if (str[left] != str[right]) return false;
        left++;
        right--;
    }
    return true;
}

int main(){

    string tab[5] = {"radar", "hello", "lvel", "stats", "world"};
    for (int i = 0; i < 5; i++) {
        if (isPalindrome(tab[i])) {
            cout <<tab[i]<<" " ;
    }
}
}