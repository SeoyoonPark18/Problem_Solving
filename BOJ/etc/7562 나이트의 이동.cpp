//BOJ 7562
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cstring> //to use memset
using namespace std;

bool visited[301][301];
int cnt[301][301] = { 0, };

int dx[8] = { -2, -1, 1, 2, -2, -1, 1, 2 };
int dy[8] = { 1, 2, 2, 1, -1, -2, -2, -1 };
int t;
int l;
int x, y, x2, y2;

bool isRange(int x, int y) {
	if (x > -1 && x < l && y > -1 && y < l) return true;
	else
		return false;
}

void bfs(int x, int y) {

	cnt[x][y] = 0;
	queue<pair<int, int>> q;
	q.push(make_pair(x, y));
	visited[x][y] = true;
	while (!q.empty()) {
		int a = q.front().first;
		int b = q.front().second;
		q.pop();

		if (a == x2 && b == y2) {
			break;
		}

		for (int i = 0; i < 8; i++) {
			int nx = a + dx[i];
			int ny = b + dy[i];
			if (isRange(nx, ny) && !visited[nx][ny]) {
				q.push(make_pair(nx, ny));
				visited[nx][ny] = true;
				cnt[nx][ny] = cnt[a][b] + 1;
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> l;
		cin >> x >> y;
		cin >> x2 >> y2;

		bfs(x, y);
		cout << cnt[x2][y2] << '\n';
		memset(visited, 0, sizeof(visited));
		//memset(cnt, 0, sizeof(cnt));
	}



	return 0;
}