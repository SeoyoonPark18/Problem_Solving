#include <string>
#include <vector>
#include <queue>
using namespace std;

bool visited[201];
queue<int> q;

int solution(int n, vector<vector<int>> computers) {
	int cnt = 0;
	//bfs
	for (int i = 0; i < n; i++) {
		if (visited[i]) continue;
		q.push(i);
		visited[i] = true;
		cnt++;

		while (!q.empty()) {
			int cur = q.front();
			q.pop();
			for (int j = 0; j < n; j++) {
				if (computers[cur][j] == 1 && !visited[j]) {
					q.push(j);
					visited[j] = true;
				}
			}
		}
	}

	return cnt;
}