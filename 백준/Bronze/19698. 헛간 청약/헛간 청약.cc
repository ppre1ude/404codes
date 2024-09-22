#include <iostream>
using namespace std;

int main() {

    int n, w, h, l;

    cin >> n;
    cin >> w;
    cin >> h;
    cin >> l;

    int w1, h1, mul; // 차례대로 w를 l로 나눈 몫, h를 l로 나눈 몫, w1과 h1의 곱
    w1 = w / l;
    h1 = h / l;
    mul = w1 * h1;

    if (n >= mul) {
        cout << mul;
    }

    else {
        cout << n;
    }

    return 0;
}