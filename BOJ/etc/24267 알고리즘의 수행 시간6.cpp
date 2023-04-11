//BOJ 24267
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	long long n; cin >> n;
	long long cnt = 0;
	
	cnt = n * (n - 1)*(n - 2) / 6;

	cout << cnt << '\n' << 3;


	return 0;
}