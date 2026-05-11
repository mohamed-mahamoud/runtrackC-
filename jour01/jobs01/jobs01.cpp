#include <iostream>
using namespace std;

char c= '\x01';
short int p=10;

int x = p+3;
char y = c+1;
char z = c+p;
char w = 3+p +5*c ;

int main()
{
    cout << "x=" << x <<endl;
    cout << "y=" << y << endl;
    cout << "z=" << z << endl;
    cout << "w=" << w << endl;
    return 0;
}