#include <iostream>
using namespace std;

int main() {
	
	int a;
	cin >> a;

	if (a > 89) {
		cout << "A" << endl;
	}
	else if (a > 79 && a < 90) { // 80~89점
		cout << "B" << endl;
	}
	else if (a > 69 && a < 80) { // 70~79점
		cout << "C" << endl;
	}
	else if (a > 59 && a < 70) { // 60~69점
		cout << "D" << endl;
	}
	else {
		cout << "F" << endl;
	}

	return 0;
}