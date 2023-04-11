//BOJ 11053
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int dp[2][1001];
	int mmax = 1;

	int n; cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> dp[0][i];
	}

	dp[1][1] = 1;
	for (int i = 2; i <= n; i++) {
		dp[1][i] = 1;
		for (int j = 1; j < i; j++) {
			if (dp[0][j] < dp[0][i]) {
				dp[1][i] = max(dp[1][i], dp[1][j] + 1);
			}
			if (dp[1][i] > mmax)
				mmax = dp[1][i];
		}
	}


	/*
	dp[1][1] = 1;
	for (int i = 2; i <= n; i++) {
		int prev = 0; int idx = 0;
		for (int j = 1; j < i; j++) {
			if (dp[0][j] < dp[0][i] && prev < dp[0][j]) {
				prev = dp[0][j];
				idx = j;
			}
			dp[1][i] = dp[1][idx] + 1;

			if (dp[0][i] == dp[0][j]) {
				dp[1][i] = dp[1][j];
			}
			if (dp[1][i] > mmax) {
				mmax = dp[1][i];
			}

		}
	}
	*/

	cout << mmax;


	return 0;
}