#include <iostream>
using namespace std;

int main() {

	int n;
	string a;
	int temp = 0;

	cin >> n;
	cin >> a;

	for (int i = 0; i < n; i++)
	{
		temp += a[i] - '0';
	}

	cout << temp;
	return 0;

}