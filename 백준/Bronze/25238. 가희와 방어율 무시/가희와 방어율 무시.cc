#include <iostream>
using namespace std;

int main() {

	int a, b;
	double c;
	cin >> a >> b;

	c = (double)a / 100 * (100 - b);

	if (a < 100) {
		cout << 1;
	}
	else {
		if (c < 100) {
			cout << 1;
		}
		else cout << 0;
	}

	return 0;
}