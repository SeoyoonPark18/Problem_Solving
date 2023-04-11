#include <iostream>
#include <queue>
using namespace std;

struct Queue {
	int x;
	int y;
};

int board[501][501];
bool visited[501][501];
int dx[] = { 0,1,0,-1 };
int dy[] = { 1,0,-1,0 };

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a, b;
	cin >> a >> b;

	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			cin >> board[i][j];
		}
	}

	queue<Queue> Q;
	Queue q;

	int count = 0;
	int max = 0;
	int area = 0;

	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			if (board[i][j] == 1 && visited[i][j] == false) {
				Q.push({ i,j });
				visited[i][j] = true;
				count++;
			}

			while (!Q.empty()) {
				q = Q.front();
				Q.pop();
				area++;

				for (int k = 0; k < 4; k++) {
					if (q.x + dx[k] < 0 || q.x + dx[k] >= a || q.y + dy[k] < 0 || q.y + dy[k] >= b)
						continue;
					if (board[q.x + dx[k]][q.y + dy[k]] == 1 && visited[q.x + dx[k]][q.y + dy[k]] == false) {
						Q.push({ q.x + dx[k], q.y + dy[k] });
						visited[q.x + dx[k]][q.y + dy[k]] = true;
					}
				}
			}
			if (max < area) {
				max = area;
			}
			area = 0;
		}
	}

	cout << count << endl << max;
}