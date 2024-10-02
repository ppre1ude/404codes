#include <iostream>
using namespace std;

int main() {

	int n, m; // n: test case, m: repeat num
	string s;
	cin >> n;

	for (int i = 0; i < n; i++) { // n회 반복 시행
		cin >> m >> s;
		for (int j = 0; j < s.length(); j++) { // 문자열 s 길이만큼 반복
			for (int k = 0; k < m; k++) { // m회 반복 출력
				cout << s[j];
			}
		}
		cout << endl;
	}

}