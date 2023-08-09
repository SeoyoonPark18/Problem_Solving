//BOJ 1697
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int arr[100001];
bool visited[100001];
int cnt[100001] = { 0, };
queue<int> q;
int dx[3];
int n, k;

bool isRange(int x) {
	if (x > -1 && x < 100001) return true;
	else
		return false;
}

void bfs(int x) {
	q.push(x);
	visited[x] = true;
	while (!q.empty()) {
		int cur = q.front();
		if (cur == k) break;
		q.pop();

		dx[0] = cur - 1;
		dx[1] = cur + 1;
		dx[2] = cur * 2;

		for (int i = 0; i < 3; i++) {
			int nx = dx[i];
			if (!visited[nx] && isRange(nx)) {
				q.push(nx);
				visited[nx] = true;
				cnt[nx] = cnt[cur] + 1;
			}			
		}	
	}	
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> k;

	bfs(n);
	cout << cnt[k];

	return 0;
}