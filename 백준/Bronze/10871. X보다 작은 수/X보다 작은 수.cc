#include <iostream>
using namespace std;

int main() {

	int n, x;
	cin >> n >> x;
	int a;

	int arr[10000];
	for (int i = 0; i < n; i++) {
		cin >> a;
		arr[i] = a;
		if (arr[i] < x) {
			cout << a << " ";
		}
	}
}