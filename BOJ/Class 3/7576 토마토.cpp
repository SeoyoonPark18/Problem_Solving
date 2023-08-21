//BOJ 7576
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int arr[1001][1001];
queue<pair<int, int>> q;

int dx[4] = { 0, 0, 1, -1 };
int dy[4] = { 1, -1, 0, 0 };
int m, n;

bool isRange(int x, int y) {
	if (x > -1 && x < n && y > -1 && y < m) return true;
	else
		return false;
}

void bfs() {
	while (!q.empty()) {
		int a = q.front().first;
		int b = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int nx = a + dx[i];
			int ny = b + dy[i];

			if (arr[nx][ny] == 0 && isRange(nx, ny)) {
				q.push(make_pair(nx, ny));
				arr[nx][ny] = arr[a][b] + 1;


			}
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> m >> n;
	int value;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> value;
			arr[i][j] = value;
			if (value == 1) {
				q.push(make_pair(i, j));
			}
		}
	}

	bfs();

	int result = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (arr[i][j] == 0) {
				cout << -1;
				return 0;
			}
			if (result < arr[i][j]) {
				result = arr[i][j];
			}
		}
	}
	cout << result - 1;


	return 0;
}