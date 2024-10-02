#include <iostream>
using namespace std;

int main() {

	int a, b, c;
	cin >> a >> b;
	int b1 = b + 24;

	if (a < 4) {
		c = b - a;
		cout << c;
	}
	else {
		c = b1 - a;
		cout << c;
	}

	return 0;

}