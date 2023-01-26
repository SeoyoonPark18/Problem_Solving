//BOJ 9461
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int p(int n) {
	if (n > 5 && n < 9) {
		return p(n - 1) + 1;
	}
	else if (n > 8 && n < 11) {
		return p(n - 1) + 2;
	}
	else if (n > 10) {
		return p(n - 1) + (n - 8);
	}
	else if (n < 4) {
		return 1;
	}
	else if (n > 3 && n < 6) {
		return 2;
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);


	int t; cin >> t;
	for (int i = 0; i < t; i++) {
		int n; cin >> n;
		cout << p(n) << "\n";

	}
	

	

	return 0;
}