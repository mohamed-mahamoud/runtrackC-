#include <iostream>
using namespace std;

int main()
{
    struct point
    {
        int x;
        int y;
    };
    

    point p1;
    p1.x = 5;
    p1.y = 10;
    cout << "Valeur de p1 : (" << p1.x << ", " << p1.y << ")" << endl;
    point *ptr = &p1;
    (*ptr).x = 15;
    (*ptr).y = 20;
    cout << "Nouvelle valeur de p1 : (" << p1.x << ", " << p1.y << ")" << endl;

}