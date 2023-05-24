//BOJ 24444
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

vector<int> graph[100005];
queue<int> q;
int visited[100005];
int cnt;

void bfs(int cur) {
	q.push(cur);
	visited[cur] = ++cnt;
	while (!q.empty()) {
		int num = q.front();
		q.pop();
		for (int i = 0; i < graph[num].size(); i++) {
			int next = graph[num][i];
			if (visited[next]) continue;
			q.push(next);
			visited[next] = ++cnt;
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, m, r;
	cin >> n >> m >> r;
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}

	for (int i = 1; i <= n; i++) {
		sort(graph[i].begin(), graph[i].end());
	}

	bfs(r);

	for (int i = 1; i <= n; i++) {
		cout << visited[i] << '\n';
	}


	return 0;
}