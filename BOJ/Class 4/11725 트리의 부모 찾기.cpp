//BOJ 11725
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> tree[100001];
bool visited[100001];
int parent[100001];

void findParent(int node) {
	//DFS
	visited[node] = true;
	for (int i = 0; i < tree[node].size(); i++) {
		int next = tree[node][i];
		if (!visited[next]) {
			parent[next] = node;
			findParent(next);
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n; cin >> n;
	for (int i = 2; i <= n; i++) {
		int a, b;
		cin >> a >> b;
		tree[a].push_back(b);
		tree[b].push_back(a);
	}

	findParent(1);

	for (int i = 2; i <= n; i++) {
		cout << parent[i] << '\n';
	}

	return 0;
}