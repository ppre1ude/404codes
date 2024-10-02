#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	int n;
	cin >> n;

	int arr[3];
	cout << "Gnomes:" << endl;

	for (int j = 0; j < n; j++) {
		for (int i = 0; i < 3; i++) {
			cin >> arr[i];
		}
		if (arr[0] > arr[1] && arr[1] > arr[2]) {
			cout << "Ordered" << endl;
		}
		else if (arr[0] < arr[1] && arr[1] < arr[2]) {
			cout << "Ordered" << endl;
		}
		else {
			cout << "Unordered" << endl;
		}
	}

	return 0;

}