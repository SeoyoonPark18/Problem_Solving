//BOJ 14889
#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
using namespace std;

int n;
bool visited[20];
int matrix[20][20] = { 0, };
int minimum = 1000;

//back tracking
void dfs(int idx, int cnt) {
	int m = n / 2;
	//visited[1] = true;

	if (cnt == m) {
		int sum1 = 0;
		int sum2 = 0;
		vector<int> v1;
		vector<int> v2;

		for (int i = 0; i < n; i++) {
			if (visited[i]) {
				v1.push_back(i);
			}
			else {
				v2.push_back(i);
			}
		}

		for (int i = 0; i < m; i++) {
			for (int j = 0; j <m; j++) {
				sum1 += matrix[v1[i]][v1[j]];
				sum2 += matrix[v2[i]][v2[j]];
			}
		}

		if (abs(sum1 - sum2) < minimum) {
			minimum = abs(sum1 - sum2);
		}

		return;
	}

	for (int i = idx; i < n; i++) {
		if (!visited[i]) {
			visited[i] = true;
			dfs(i, cnt + 1);
			visited[i] = false;
		}
	}

}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> matrix[i][j];
		}
	}
	
	
	dfs(0, 0); 
	cout << minimum;

	return 0;
}