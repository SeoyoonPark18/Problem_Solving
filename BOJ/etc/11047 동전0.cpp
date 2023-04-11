//BOJ 11047
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int arr[10];
	int n; int k;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int left = k;
	int sum = 0;
	for (int i = n - 1; i >= 0; i--) {
		sum += left / arr[i];
		left = left % arr[i];
	}

	cout << sum;

	return 0;
}