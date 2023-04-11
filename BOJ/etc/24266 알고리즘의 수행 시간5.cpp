//BOJ 24266
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	long long n; cin >> n;
	long long cnt = 0;
	/*
	for (int i = 1; i < n; i++) {
		for (int j = i + 1; j <= n; j++) {
			cnt++;
		}
	}
	*/
	cout << n*n*n << "\n" << 3;


	return 0;
}