#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int a, b, c, d, e;
    int a1, b1, c1, d1, e1;

    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    cin >> e;

    a1 = pow(a, 2);
    b1 = pow(b, 2);
    c1 = pow(c, 2);
    d1 = pow(d, 2);
    e1 = pow(e, 2);

    cout << (a1 + b1 + c1 + d1 + e1) % 10 ;
    

    return 0;
}