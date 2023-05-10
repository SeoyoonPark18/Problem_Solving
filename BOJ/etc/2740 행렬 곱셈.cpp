//BOJ 2740
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int a[100][100];
int b[100][100];
int c[100][100] = { 0, };

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int n, m, k;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	cin >> m >> k;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < k; j++) {
			cin >> b[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k; j++) {
			int cur = 0;
			while (cur < m) {
				c[i][j] += a[i][cur] * b[cur][j];
				cur++;
			}
			cout << c[i][j] << ' ';
		}
		cout << '\n';
	}


	

	return 0;
}