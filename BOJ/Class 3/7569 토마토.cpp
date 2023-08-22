//BOJ 7569
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <tuple>
using namespace std;

int arr[102][102][102];
queue<tuple<int, int, int>> q;

int dx[6] = { 0, 0, 1, -1, 0, 0 };
int dy[6] = { 1, -1, 0, 0, 0, 0 };
int dz[6] = { 0, 0, 0, 0, 1, -1 };
int m, n, h;

bool isRange(int x, int y, int z) {
	if (x >= 0 && x < n && y >= 0 && y < m && z >= 0 && z < h) return true;
	else
		return false;
}

void bfs() {
	while (!q.empty()) {
		int a = get<0>(q.front());
		int c = get<1>(q.front());
		int b = get<2>(q.front());
		q.pop();

		for (int i = 0; i < 6; i++) {
			int nz = a + dz[i];
			int nx = b + dx[i];
			int ny = c + dy[i];

			if (nz >= 0 && nz < h && ny >= 0 && ny < n && nx >= 0 && nx < m) {
				if (arr[nz][ny][nx] == 0) {
					q.push(make_tuple(nz, ny, nx));
					arr[nz][ny][nx] = arr[a][c][b] + 1;
				}
			}

		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> m >> n >> h;
	int value;
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < m; k++) {
				cin >> value;
				arr[i][j][k] = value;
				if (value == 1) {
					q.push(make_tuple(i, j, k));
				}
			}
		}
	}

	bfs();

	int result = 0;
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < m; k++) {
				if (arr[i][j][k] == 0) {
					cout << -1;
					return 0;
				}
				if (result < arr[i][j][k]) result = arr[i][j][k];
			}
		}
	}

	cout << result - 1;


	return 0;
}