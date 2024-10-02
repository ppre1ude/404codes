#include <iostream>
using namespace std;

int main() {
    long long num, ans = 0;
    char op;
    cin >> num;
    ans = num;

    while (1)
    {
        cin >> op;
        if (op == '=') {
            cout << ans << endl;
            break;
        }
        cin >> num;

        if (op == '+')
            ans += num;
        else if (op == '-')
            ans -= num;
        else if (op == '*')
            ans *= num;
        else if (op == '/')
            ans /= num;
    }
}
