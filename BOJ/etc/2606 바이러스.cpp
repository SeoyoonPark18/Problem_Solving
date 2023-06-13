//BOJ 2606
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

vector<int> graph[100];
queue<int> q;
int visited[100];
int cnt = 0;

void bfs(int cur) {
	q.push(cur);
	visited[cur] += 1;
	while (!q.empty()) {
		int num = q.front();
		q.pop();
		for (int i = 0; i < graph[num].size(); i++) {
			int next = graph[num][i];
			if (visited[next]) continue;
			q.push(next);
			visited[next] += 1;
			cnt++;
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}

	for (int i = 1; i <= n; i++) {
		sort(graph[i].begin(), graph[i].end());
	}

	bfs(1);
	cout << cnt;


	return 0;
}