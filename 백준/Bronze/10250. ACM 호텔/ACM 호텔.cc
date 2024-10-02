#include <iostream>
using namespace std;

int main() {

	int t, h, w, n; // t: test data, h: height(층수), w: width(방수), n: n번째 손님
	int ans;

	cin >> t;
	for (int i = 0; i < t; i++) { // t번 반복
		cin >> h >> w >> n;

		if (n % h == 0) {
			ans = h * 100 + (n / h);
		}
		else {
			ans = (n % h) * 100 + (n / h) + 1;
		}
		cout << ans << endl;
	}
}