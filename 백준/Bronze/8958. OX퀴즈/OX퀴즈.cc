#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int score = 0;
		int tmp = 0;
		string s;
		cin >> s;

		for (int j = 0; j < s.size(); j++) {
			if (s[j] == 'O') score += ++tmp;
			else tmp = 0;
		}
		cout << score << endl;
	}

	return 0;
}