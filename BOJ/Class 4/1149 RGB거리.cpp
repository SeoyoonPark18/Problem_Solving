//1149
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int arr[1001][3] = { 0, };
	
	int n; cin >> n;
	for (int i = 1; i <= n; i++) {
		int r, g, b;
		cin >> r >> g >> b;

		arr[i][0] = min(arr[i - 1][1], arr[i - 1][2]) + r;
		arr[i][1] = min(arr[i - 1][0], arr[i - 1][2]) + g;
		arr[i][2] = min(arr[i - 1][0], arr[i - 1][1]) + b;
	}
	
	cout << min(arr[n][0], min(arr[n][1], arr[n][2]));

	return 0;
}