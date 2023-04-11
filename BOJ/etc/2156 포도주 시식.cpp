//BOJ 2156
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int arr[10001];
	int ans[10001];

	int n; cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}

	ans[1] = arr[1];
	ans[2] = arr[1] + arr[2];

	for (int i = 3; i <= n; i++) {	
		//ans[i] = max(ans[i - 2], arr[i - 1] + ans[i - 3]) + arr[i];
		ans[i] = ans[i - 1];
		if (ans[i - 2] + arr[i] > ans[i]) {
			ans[i] = ans[i - 2] + arr[i];
		}
		if (arr[i - 1] + ans[i - 3] + arr[i] > ans[i]) {
			ans[i] = arr[i - 1] + ans[i - 3] + arr[i];
		}
	}
	
	cout << ans[n];
	

	return 0;
}