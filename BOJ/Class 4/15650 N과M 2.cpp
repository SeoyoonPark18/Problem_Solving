//BOJ 15650
#include <iostream>
#include <algorithm>
using namespace std;

int n, m;
//vector<int> v;
int list[9];
bool visited[9];

//back tracking
void dfs(int idx, int cnt) {
	if (cnt == m) {
		for (int i = 0; i < m; i++) {
			cout << list[i] << " ";
		}
		cout << "\n";
		return;
	}

	for (int i = idx; i <= n; i++) {
		if (!visited[i]) {
			visited[i] = true;
			//v.push_back(idx);
			list[cnt] = i;
			dfs(i+1, cnt+1);
			//v.pop_back();
			visited[i] = false;
		}
	}

}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m;
	dfs(1, 0);

	return 0;
}