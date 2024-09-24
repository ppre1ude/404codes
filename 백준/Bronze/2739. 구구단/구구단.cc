#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    int p;

    for (int i = 1; i < 10; i++)
    {
        p = n * i;
        cout << n << " * " << i << " = " << p << endl;
    }

    return 0;
}