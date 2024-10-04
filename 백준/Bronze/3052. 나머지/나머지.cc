#include <iostream>
using namespace std;

int main() {
    int a[42] = {};
    int temp;

    for (int i = 0; i < 10; i++) {
        cin >> temp;
        a[temp % 42]++;
    }

    int result = 0;
    
    for (int temp : a) {
        if (temp > 0) {
            result++;
        }
    }
    cout << result;

    return 0;

}