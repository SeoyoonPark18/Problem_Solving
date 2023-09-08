//BOJ 4803
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> graph[501];
bool visited[501];

//dfs
bool checkCycle(int node, int parent) {
	visited[node] = true;
	for (int i = 0; i < graph[node].size(); i++) {
		int next = graph[node][i];
		if (next == parent) continue;
		if (visited[next]) return true;
		if (checkCycle(next, node)) {
			return true;
		}


		/*
		int next = graph[node][i];
		if (visited[next] && next != parent) {
			//cycle 
			return true;
		}
		if (checkCycle(next, node)) {
			return true;
		}
		*/
	}
	return false;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int t = 0;
	int n, m, cnt;
	int a, b;
	while (true) {
		cin >> n >> m;
		if (n == 0 && m == 0) break;

		//memset(graph, 0, sizeof(graph)); 
		//memset(visited, 0, sizeof(visited));
		for (int i = 0; i <= 500; i++) {
			graph[i].clear();
			visited[i] = false;
		}
		t++;

		for (int i = 0; i < m; i++) {
			cin >> a >> b;
			graph[a].push_back(b);
			graph[b].push_back(a);
		}

		cnt = 0;
		for (int i = 1; i <= n; i++) {
			if (!visited[i]) {
				if (!checkCycle(i, 0)) {
					cnt++;
				}
			}
		}
		switch (cnt) {
		case 0:
			cout << "Case " << t << ": " << "No trees.\n";
			break;
		case 1:
			cout << "Case " << t << ": " << "There is one tree.\n";
			break;
		default:
			cout << "Case " << t << ": " << "A forest of " <<cnt<< " trees.\n";
			break;
		}
	}
	
	

	return 0;
}