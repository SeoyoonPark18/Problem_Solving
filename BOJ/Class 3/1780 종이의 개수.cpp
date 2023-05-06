//BOJ 1780
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int arr[2187][2187];
int cnt1 = 0; //-1
int cnt2 = 0; //0
int cnt3 = 0; //1

int check(int n, int a, int b) {	
	int cur = arr[a][b];
	for (int i = a; i < n+a; i++) {
		for (int j = b; j < n+b; j++) {
			if (arr[i][j] != cur) {
				return -2; //random num
			}
		}
	}
	return cur;
}

void divide(int n, int a, int b) {
	int rec = check(n, a, b);
	if (rec == -2) {
		int nn = n / 3;
		divide(nn, a, b);
		divide(nn, a, b + nn);
		divide(nn, a, b + nn +nn);
		divide(nn, a + nn, b);		
		divide(nn, a + nn, b + nn);
		divide(nn, a + nn, b + nn + nn);
		divide(nn, a + nn + nn, b);
		divide(nn, a + nn + nn, b + nn);
		divide(nn, a + nn + nn, b +nn + nn);
	}
	else {
		if (rec == -1) {
			cnt1++; return;
		}
		else if (rec == 0) {
			cnt2++; return;
		}
		else if (rec == 1) {
			cnt3++; return;
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
	cout << cnt1 << '\n' << cnt2 << '\n' << cnt3;

	return 0;
}