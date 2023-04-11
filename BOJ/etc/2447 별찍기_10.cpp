//BOJ 2447
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

char arr[2187][2187]; //3^7

void blank(int n, int a, int b) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			arr[a + i][b + j] = ' ';
		}
	}
	return;
}
void star(int n, int a, int b) {
	if (n == 3) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				arr[a+i][b+j] = '*';
			}
		}
		arr[a+1][b+1] = ' ';
		return;
	}
	else {
		int nn = n / 3;
		star(nn, a, b);
		star(nn, a, b + nn * 1);
		star(nn, a, b + nn * 2);
		star(nn, a + nn * 1, b);
		blank(nn, a + nn * 1, b + nn * 1); //
		star(nn, a + nn * 1, b + nn * 2);
		star(nn, a + nn * 2, b);
		star(nn, a + nn * 2, b + nn * 1);
		star(nn, a + nn * 2, b + nn * 2);

	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int n; cin >> n;
	star(n, 0, 0);
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << arr[i][j];
		}
		cout << "\n";
	}
	

	return 0;
}