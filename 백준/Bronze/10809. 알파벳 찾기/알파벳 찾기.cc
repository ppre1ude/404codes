#include <iostream>
#include <string>

using namespace std;

void findalpha() {
	string s;
	cin >> s;
	int arr[26];

	for (int i = 0; i < 26; i++) {
		arr[i] = -1;
	}

	for (int i = 97; i <= 122; i++) {
		for (int j = 0; j < s.length(); j++) {
			if (i == s[j]) {
				arr[s[j] - 97] = j;
				break;
			}
		}
	}

	for (int i = 0; i < 26; i++) {
		cout << arr[i] << " ";
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	findalpha();
}