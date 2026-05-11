#include <iostream>
using namespace std;

int main(){
    int m = 10;
    int n = 20;
    cout <<"les valeurs de m et n sont respectivement : " << m << " et " << n << endl;
    int temp = m;
    m = n;
    n = temp;
    cout <<"les valeurs de m et n sont respectivement : " << m << " et " << n << endl;
}