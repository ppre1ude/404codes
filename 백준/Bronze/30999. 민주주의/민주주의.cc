#include <iostream>
using namespace std;

int answer(const int _n, const string _str)
{
	int countO = 0; // O 카운트
	int countX = 0; // X 카운트
    
	for (int i = 0; i < _n; i++) {
		for (int j = 0; j < _str.size(); j++) {
			if (_str[j] == 'O') {
				++countO;
			}
			else {
				++countX;
			}
		}
	}

	if (countO > countX) { // countO가 더 클 경우 1 반환
		return 1;
	}
	else {
		return 0;
	}
}


int main()
{
	int n, m;
	int count = 0;
	string str = "";

	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		str = "";
		for (int j = 0; j < m; j++) {
			char ch;
			cin >> ch;
			str = str + ch;
		}

		count = count + answer(n, str);
	}

	cout << count;
}