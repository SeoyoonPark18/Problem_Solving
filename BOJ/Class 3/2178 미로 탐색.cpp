//BOJ 2178
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <string>
using namespace std;

int arr[101][101];
bool visited[101][101];
queue<pair<int,int>> q;
int n, m;
int cnt[101][101] = { 1, };

int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };

bool range(int x, int y) {
	if (x >= 0 && x < n && y >= 0 && y < m) {
		return true;
	}
	else return false;
}

void bfs(int x, int y) {
	q.push(make_pair(x, y));
	visited[x][y] = true;
	while (!q.empty()) {
		int a = q.front().first;
		int b = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int nx = a + dx[i];
			int ny = b + dy[i];
			if (arr[nx][ny] == 1 && !visited[nx][ny] && range(nx, ny)) {
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

	cin >> n >> m;
	string str;
	for (int i = 0; i < n; i++) {
		cin >> str;
		for (int j = 0; j < m; j++) {
			arr[i][j] = str[j] - '0';
		}
	}

	bfs(0, 0);
	cout << cnt[n - 1][m - 1];

	return 0;
}