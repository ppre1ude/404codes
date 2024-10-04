#include <iostream>
using namespace std;

int main() {

	int a;
	int b = 1;
	cin >> a;

	if (a == 0) {
		cout << 1;
	}
	else {
		for (int i = 1; i <= a; i++) {
			b *= i;
		}
		cout << b;
	}
}