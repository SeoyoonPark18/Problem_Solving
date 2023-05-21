//BOJ 24479
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> graph[100005];
int visited[100005];
int cnt;

void dfs(int cur) {
	visited[cur] = cnt++;
	for (int i = 0; i < graph[cur].size(); i++) {
		if (visited[graph[cur][i]] != 0) continue;
		dfs(graph[cur][i]);
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

	dfs(r);

	for (int i = 1; i <= n; i++) {
		cout << visited[i] << '\n';
	}


	return 0;
}