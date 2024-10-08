#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int i, j;

int shirt_size[7];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	int n, t, p;
	cin >> n;

	for(i = 1; i <= 6; i++){
		cin >> shirt_size[i];
	}

	cin >> t >> p;
	int t_shirt = 0;

	for(i = 1; i <= 6; i++){
		t_shirt += (shirt_size[i] + t - 1) / t;
	}

	cout << t_shirt << endl;
	cout << n / p << ' ' << n % p << endl;

    return 0;
}