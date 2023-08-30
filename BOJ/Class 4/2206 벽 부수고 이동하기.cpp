//BOJ 2206
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <tuple>
#include <string>
using namespace std;

int n, m;
int map[1001][1001];
int cnt[1001][1001][2];

int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };


void bfs() {
	queue<tuple<int, int, int>> q;
	q.push(make_tuple(1, 1, 1));
	cnt[1][1][1] = 1;
	while (!q.empty()) {
		int a = get<0>(q.front());
		int b = get<1>(q.front());
		int c = get<2>(q.front()); //breakable
		q.pop();

		if (a == n && b == m) {
			cout << cnt[n][m][c];
			return;
		}

		for (int i = 0; i < 4; i++) {
			int ny = a + dy[i];
			int nx = b + dx[i]; //xy order!
			if (nx >= 1 && ny >= 1 && nx <= m && ny <= n && !cnt[ny][nx][c]) {
				if (map[ny][nx] == 0) {
					q.push(make_tuple(ny, nx, c));
					cnt[ny][nx][c] = cnt[a][b][c] + 1;
				}
				else if (map[ny][nx] == 1 && c == 1) {
					q.push(make_tuple(ny, nx, c - 1));
					cnt[ny][nx][c - 1] = cnt[a][b][c] + 1;
				}
			}
		}
	}
	cout << -1;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m;
	string s;
	for (int i = 1; i <= n; i++) {
		cin >> s;
		for (int j = 1; j <= m; j++) {
			map[i][j] = s[j - 1] - '0';
		}
	}

	bfs();


	return 0;
}