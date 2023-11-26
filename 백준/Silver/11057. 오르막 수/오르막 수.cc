//BOJ 11057
#include <iostream>
#include <algorithm>
using namespace std;

int dp[1001][10];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n; cin >> n;

	for (int i = 0; i < 10; i++) {
		dp[0][i] = 1;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < 10; j++) {
			if (j == 0) {
				dp[i][j] = 1;
				continue;
			} 
			dp[i][j] = (dp[i][j - 1] + dp[i - 1][j]) % 10007;
		}
	}

	cout << dp[n][9];
	
	

	return 0;
}
/*
점화식 규칙 발견하기!
2차원 배열!
어려우면 직접 n=1,2,3,4 정도 까지 계산 후 사칙연산 규칙 찾아보기
*/