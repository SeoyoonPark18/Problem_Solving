#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

queue<pair<int, int>> q;
int visited[100][100];
int cnt[100][100];

int dx[4] = { 1, -1, 0, 0 };
int dy[4] = { 0, 0, 1, -1 };

int solution(vector<vector<int> > maps)
{
	int m = maps.size(); //y
	int n = maps[0].size(); //x
	cnt[m - 1][n - 1] = -1;

	//bfs
	q.push(make_pair(0, 0));
	visited[0][0] = true;
	cnt[0][0] = 1;
	while (!q.empty()) {
		int a = q.front().first; //y
		int b = q.front().second; //x
		q.pop();

		if (a == m - 1 && b == n - 1) break;

		for (int i = 0; i < 4; i++) {
			int ny = a + dy[i];
			int nx = b + dx[i];
			if (ny > -1 && ny<m && nx>-1 && nx < n) {
				if (maps[ny][nx] == 1 && !visited[ny][nx]) {
					q.push(make_pair(ny, nx));
					visited[ny][nx] = true;
					cnt[ny][nx] = cnt[a][b] + 1;
				}
			}
		}
	}


	int answer = cnt[m - 1][n - 1];
	return answer;
}