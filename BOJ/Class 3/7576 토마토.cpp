//BOJ 7576
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int arr[1001][1001];
bool visited[1001][1001];
queue<pair<int, int>> q;

int cnt = 0;
int initialCnt = 0;
int remainCnt = 0;
int date = 1;

int dx[4] = { 0, 0, 1, -1};
int dy[4] = { 1, -1, 0, 0};
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
		visited[a][b] = true;
		q.pop();
	 
		for (int i = 0; i < 4; i++) {
			int nx = a + dx[i];
			int ny = b + dy[i];
			
			if (!visited[nx][ny] && isRange(nx, ny)) {			
				q.push(make_pair(nx, ny));
				arr[nx][ny] = arr[a][b] + 1;
				cnt++;
				date = max(date, arr[nx][ny]);
				visited[nx][ny] = true;
			}		
		}		
	}	
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> m >> n;
	remainCnt = m * n;
	int value;
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> value;
			arr[i][j] = value;
			if (value == 1) {
				initialCnt++;
	
				q.push(make_pair(i, j));
			}
			if (value == -1) { 
				remainCnt--;
				visited[i][j] = true;
			}
		}
	}
	
	cnt += initialCnt;
	bfs();
	
	if (remainCnt == 0) cout << 0;
	else if (cnt < remainCnt) cout << -1;
	else cout << date - 1;
	

	return 0;
}