//BOJ 9461
#include <iostream>
#include <algorithm>
using namespace std;

long long arr[101] = { 0, }; // cannot use int because n value will be over than 78



int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	arr[1] = 1; arr[2] = 1; arr[3] = 1;
	arr[4] = 2; arr[5] = 2;

	for (int i = 6; i < 101; i++) {
		if (i < 9) {
			arr[i] = arr[i - 1] + 1;
		}
		if (i > 8 && i < 11) {
			arr[i] = arr[i - 1] + 2;
		}
		if (i > 10) {
			arr[i] = arr[i - 1] + arr[i - 5];
		}
	}


	int t; cin >> t;
	for (int i = 0; i < t; i++) {
		int n; cin >> n;
		cout << arr[n] << "\n";

	}




	return 0;
}