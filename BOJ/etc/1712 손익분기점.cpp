#include <iostream>
#include <vector>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;

	int n = a / (c - b) + 1;
	
	if (b >= c) {
		n = -1;
	}
	cout << n;
	return 0;
}