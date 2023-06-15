//BOJ 1260
#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
using namespace std;

vector<int> graph[1001];
queue<int> q;
int visitedD[1001];
int visitedB[1001];

void dfs(int cur) {	
	visitedD[cur]++;
	cout << cur << ' ';
	for (int i = 0; i < graph[cur].size(); i++) {
		int next = graph[cur][i];
		if (visitedD[next]) continue;
		dfs(next);
	}
}

void bfs(int v) {
	q.push(v);
	visitedB[v]++;
	cout << v << ' ';
	while (!q.empty()) {
		int cur = q.front();
		q.pop();
		for (int i = 0; i < graph[cur].size(); i++) {
			int next = graph[cur][i];
			if (visitedB[next]) continue;
			q.push(next);
			visitedB[next]++;
			cout << next << ' ';
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, m, v;
	cin >> n >> m >> v;
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}

	for (int i = 1; i <= n; i++) {
		sort(graph[i].begin(), graph[i].end()); //1~N
	}

	dfs(v);
	cout << '\n';
	bfs(v);


	return 0;
}