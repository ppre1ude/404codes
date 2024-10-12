#include <iostream>
using namespace std;


int main() {

	int lambda;
	cin >> lambda;

	if (lambda >= 620) cout << "Red";
	else if (lambda >= 590 && lambda < 620) cout << "Orange";
	else if (lambda >= 570 && lambda < 590) cout << "Yellow";
	else if (lambda >= 495 && lambda < 570) cout << "Green";
	else if (lambda >= 450 && lambda < 495) cout << "Blue";
	else if (lambda >= 425 && lambda < 450) cout << "Indigo";
	else if (lambda < 425) cout << "Violet";

}