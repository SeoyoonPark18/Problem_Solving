#include <iostream>
using namespace std;

int main() {
	long long n, k;
	int count = 0;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		k = i;
		while (k > 9) {
			if (k % 10 == 3 || k % 10 == 6 || k % 10 == 9) {
				count++;
			}
			k /= 10;
		}
		if (k % 10 == 3 || k % 10 == 6 || k % 10 == 9)
			count++;
	}
	cout << count;
	return 0;
}