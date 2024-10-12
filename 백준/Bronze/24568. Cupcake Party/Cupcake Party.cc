#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;

	int cupcakes = a * 8 + b * 3;
	int leftover = cupcakes - 28;

	if (leftover < 0) cout << 0;
	else cout << leftover;
}