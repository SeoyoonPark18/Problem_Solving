//10872 ÆÑÅä¸®¾ó
#include <iostream>
using namespace std;

int factorial(int num) {
	if (num > 2) {
		num *= factorial(num - 1);
	}
	return num;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n; int result = 0;
	cin >> n;
	if (n > 0) {
		result = factorial(n);
	}
	else if (n == 0)
		result = 1;
	cout << result;
	return 0;
}