//BOJ 11660
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int arr[1025][1025] = { 0, };

	int n; int m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			int num; cin >> num;
			arr[i][j] = arr[i][j - 1] + num;
		}
	}

	for (int i = 0; i < m; i++) {
		int x1, x2, y1, y2;
		cin >> x1 >> y1 >> x2 >> y2;

		int cnt = y2 - y1 + 1;
		int sum = 0;
		for (int j = y1; j <= y2; j++) {
			sum += arr[j][x2] - arr[j][x1 - 1];
		}

		
		cout << sum << '\n';

	}




	return 0;
}