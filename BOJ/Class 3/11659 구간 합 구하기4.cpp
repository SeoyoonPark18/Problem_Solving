//BOJ 11659
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int arr[100001] = { 0, };
	int sum[100001] = { 0, };

	int n; int m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
		sum[i] = sum[i - 1] + arr[i];
	}
	for (int i = 0; i < m; i++) {
		int a; int b;
		cin >> a >> b;
		cout << sum[b] - sum[a - 1] << '\n';
	}

	return 0;
}