#include <iostream>
using namespace std;

int main()
{
    int a,b;
    a = 10;
    b = 20;
    int *p1 = &a;
    int *p2 = &b;
    cout << "a = " << a << " b = " << b << endl;
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    cout << "a = " << a << " b = " << b << endl;
    return 0;
}