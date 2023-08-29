//BOJ 2206
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <string>
using namespace std;

int n, m;
int map[1001][1001];
bool visited[1001][1001];
int cnt[1001][1001] = { 0, };

int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };

bool isRange(int x, int y) {
	if (x > 0 && y > 0 && x <= n && y <= m) return true;
	else return false;
}

void bfs(int x, int y) {
	queue<pair<int,int>> q;
	q.push(make_pair(x, y));
	visited[x][y] = true;
	cnt[x][y] = 1;
	while (!q.empty()) {
		int a = q.front().first;
		int b = q.front().second;
		q.pop();
		
		if (a == n && b == m) {
			cout << cnt[n][m];
			return;
		}

		for (int i = 0; i < 4; i++) {
			int nx = a + dx[i];
			int ny = b + dy[i];

			if (isRange(nx,ny) && !visited[nx][ny]) {
				if (map[nx][ny] == 0) {
					if (map[a][b] == -1) {
						map[nx][ny] = -1;
					}
					q.push(make_pair(nx, ny));
					visited[nx][ny] = true;
					cnt[nx][ny] = cnt[a][b] + 1;
				}
				else {
					if (map[a][b] == -1) {
						visited[nx][ny] = true;
						cnt[nx][ny] = 0;
					}
					else {
						map[nx][ny] = -1;
						q.push(make_pair(nx, ny));
						visited[nx][ny] = true;
						cnt[nx][ny] = cnt[a][b] + 1;
					}					
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
			map[i][j] = s[j - 1] - 48;
		}
	}

	bfs(1, 1);
	//if (cnt[n][m] == 0) cout << -1;
	//else cout << cnt[n][m];
	


	return 0;
}