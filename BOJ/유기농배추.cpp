#include <iostream>
using namespace std;

const int MAX = 100;
int n;
int rain;
int arr[MAX][MAX];
int visited[MAX][MAX];
int dy[] = { 0,0,-1,1 };
int dx[] = { -1,1,0,0 };


void DFS(int x, int y) {
	visited[x][y] = 1;

	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx < 0 || nx >= n || ny < 0 || ny >= n)
			continue;

		if (arr[nx][ny] > rain && visited[nx][ny] == 0) {
			DFS(nx, ny);
		}
	}
}

int main() {

	cin >> n;
	int cnt = 0;

	int height;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> height;
			arr[i][j] = height;
		}
	}

	cin >> rain;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (arr[i][j] > rain && visited[i][j] == 0) {
				DFS(i, j);
				cnt++;
			}
		}

		cout << cnt << endl;
	}
}
