//BOJ 15649
#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;

int n, m;
vector<int> v;
bool visited[8];

void dfs() {
	if (v.size() == m) {
		for (int i : v) {
			cout << i << " ";
		}
		cout << "\n";
		return;
	}

	for (int i = 0; i < n; i++) {
		if (!visited[i]) {
			visited[i] = true;
			v.push_back(i + 1);
			dfs();
			v.pop_back();
			visited[i] = false;
		}
	}

}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m;
	dfs();

	return 0;
}