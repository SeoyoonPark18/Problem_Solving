//BOJ 24313
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int a, b, c, n;
	cin >> a >> b >> c >> n;
	
	int fvalue = a * n + b;
	int gvalue = c * n;

	if (fvalue <= gvalue && c >= a) {
		cout << 1;
	}
	else {
		cout << 0;
	}


	return 0;
}