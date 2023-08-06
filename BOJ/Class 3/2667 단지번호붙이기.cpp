//BOJ 2667
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <string>
using namespace std;

int arr[26][26];
bool visited[26][26];
int n;
int cnt = 0;
vector<int> vcnt;
int totalcnt = 0;

int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };

bool range(int x, int y) {
	if (x >= 0 && x < n && y >= 0 && y < n) {
		return true;
	}else return false;
}

void dfs(int x, int y) {
	visited[x][y] = true;
	cnt++;
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (arr[nx][ny] == '1' && !visited[nx][ny]) {
			dfs(nx, ny);
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	string str;
	for (int i = 0; i < n; i++) {
		cin >> str;
		for (int j = 0; j < n; j++) {
			arr[i][j] = str[j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (arr[i][j] == '0' || visited[i][j]) continue;
			cnt = 0;
			dfs(i, j);
			vcnt.push_back(cnt);
			totalcnt++;
		}
	}
	
	cout << totalcnt << '\n';
	sort(vcnt.begin(), vcnt.end());
	for (int i = 0; i < vcnt.size(); i++) {
		cout << vcnt[i] << '\n';
	}

	return 0;
}