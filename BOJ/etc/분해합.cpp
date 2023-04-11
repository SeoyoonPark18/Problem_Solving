#include <iostream>
#include <cstring>
using namespace std;

int main() {

	int n; cin >> n;
	int sum; int part;

	for (int i = 1; i < n; i++) {
		sum = i;
		part = i;

		while (part) {
			sum += part % 10;
			part /= 10;
		}
		if (n == sum) {
			cout << i << endl;
			return 0;
		}
	}
	cout << "0";

	return 0;
}