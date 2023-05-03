//BOJ 2630
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int arr[128][128];
int white = 0; int blue = 0;

int check(int n, int a, int b) {
	int cur = arr[a][b];
	for (int i = a; i < n + a; i++) {
		for (int j = b; j < n + b; j++) {
			if (arr[i][j] != cur) {
				return -1;
			}
		}
	}
	return cur;
}

void divide(int n, int a, int b) {
	int rec = check(n, a, b);
	if (rec == -1) {
		int nn = n / 2;
		divide(nn, a, b);
		divide(nn, a + nn, b);
		divide(nn, a, b + nn);
		divide(nn, a + nn, b + nn);
	}
	else {
		if (rec == 1) {
			blue++; return;
		}
		else {
			white++; return;
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}

	divide(n, 0, 0);
	cout << white << '\n' << blue;

	return 0;
}