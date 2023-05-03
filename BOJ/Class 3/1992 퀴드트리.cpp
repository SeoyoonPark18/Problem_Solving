//BOJ 1992
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int arr[64][64];

int check(int n, int a, int b) {	
	int cur = arr[a][b];
	for (int i = a; i < n+a; i++) {
		for (int j = b; j < n+b; j++) {
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
		cout << '(';
		divide(nn, a, b);
		divide(nn, a, b + nn);
		divide(nn, a + nn, b);			
		divide(nn, a + nn, b + nn);
		cout << ')';
	}
	else {
		if (rec == 0) {
			cout << 0; return;
		}
		else if (rec == 1) {
			cout << 1; return;
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		string line; cin >> line; //there are no space
		for (int j = 0; j < n; j++) {
			arr[i][j] = (int)line[j] - 48; //char to int
		}
	}

	divide(n, 0, 0);

	return 0;
}