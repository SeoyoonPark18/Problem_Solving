//BOJ 1932
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int n; cin >> n;
	int arr[501][501] = { 0, };
	int maxSum = 0;

	int top; cin >> top;
	arr[0][0] = top;
	arr[0][1] = 0;

	for (int i = 2; i <= n; i++) {
		for (int j = 0; j < i; j++) {
			int num; cin >> num;
			if (j == 0) {
				arr[i - 1][j] = num + arr[i - 2][j];
			}
			else {
				arr[i - 1][j] = num + max(arr[i - 2][j], arr[i - 2][j - 1]);
			}
			/*
			if (i == n && maxSum<arr[i-1][j] ) {
				maxSum = arr[i - 1][j];
			}
			*/
		}
	}

	maxSum = arr[n - 1][0];
	for (int i = 1; i < n; i++) {
		maxSum = max(maxSum, arr[n - 1][i]);
	}

	cout << maxSum;


	return 0;
}