//BOJ 16928
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int n, m;
int arr[101] = { 0, };
bool visited[101];
int cnt[101];


void bfs(int x) {
	queue<int> q;
	q.push(x);
	visited[x] = true;
	while (!q.empty()) {
		int cur = q.front();
		q.pop();

		for (int i = 1; i <= 6; i++) {
			int idx = cur + i;

			if (idx == 100) {//100
				cnt[idx] = cnt[cur] + 1;
				return;
			}
			

			if (idx < 100 && !visited[idx]) {
				if (arr[idx] != 0) {
					q.push(arr[idx]);
					visited[arr[idx]] = true;
					visited[idx] = true;
					cnt[arr[idx]] = min(cnt[arr[idx]], cnt[cur] + 1);
				}
				else {
					q.push(idx);
					visited[idx] = true;
					cnt[idx] = min(cnt[idx], cnt[cur] + 1);
				}							
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m;
	int a, b;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		arr[a] = b;
	}
	for (int j = 0; j < m; j++) {
		cin >> a >> b;
		arr[a] = b;
	}

	
	for (int i = 2; i <= 100; i++) {
		cnt[i] = 9999;
	}
	bfs(1);
	cout << cnt[100];


	return 0;
}