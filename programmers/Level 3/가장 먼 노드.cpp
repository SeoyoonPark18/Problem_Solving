#include <string>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

vector<int> graph[20001];
queue<int> q;
bool visited[20001];
int cnt[20001];
int _max = 0;

int solution(int n, vector<vector<int>> edge) {

	for (int i = 0; i < edge.size(); i++) {
		int a = edge[i][0];
		int b = edge[i][1];
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
	for (int i = 1; i <= n; i++) {
		sort(graph[i].begin(), graph[i].end());
	}

	//bfs
	q.push(1);
	visited[1] = true;
	cnt[1] = 0;
	while (!q.empty()) {
		int cur = q.front();
		q.pop();
		for (int i = 0; i < graph[cur].size(); i++) {
			int next = graph[cur][i];
			if (!visited[next]) {
				q.push(next);
				visited[next] = true;
				cnt[next] = cnt[cur] + 1;
				_max = max(_max, cnt[next]);
			}
		}
	}

	int answer = 0;
	for (int i = 2; i <= n; i++) {
		if (cnt[i] == _max) answer++;
	}


	return answer;
}