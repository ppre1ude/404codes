#include <iostream>
using namespace std;

int main() {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

    int t, num1, num2;
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> num1 >> num2;
        cout << num1 + num2 << "\n";
    }

	return 0;

}