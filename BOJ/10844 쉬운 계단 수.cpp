//BOJ 10844
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	long long arr[101][10] = { 0, };
	int n; cin >> n;

	for (int i = 1; i < 10; i++) {
		arr[1][i] = 1;
	}
	for (int i = 2; i <= n; i++) {
		for (int j = 0; j < 10; j++) {
			if (j == 0) {
				arr[i][j] = arr[i - 1][j + 1] % 1000000000;
			}
			else if (j == 9) {
				arr[i][j] = arr[i - 1][j - 1] % 1000000000;
			}
			else {
				arr[i][j] = arr[i - 1][j - 1] % 1000000000;
				arr[i][j] += arr[i - 1][j + 1] % 1000000000;
			}
		}
	}

	long long sum = 0;
	for (int i = 0; i < 10; i++) {
		sum += arr[n][i] % 1000000000;
	}
	cout << sum % 1000000000;

	return 0;
}