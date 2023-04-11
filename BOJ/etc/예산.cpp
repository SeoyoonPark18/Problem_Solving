#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	long long n; cin >> n;
	long long arr[10000];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	long long m; cin >> m;

	long long left = 0;
	long long right = arr[n - 1];
	long long answer = 0;

	while (left <= right) {
		long long mid = (left + right) / 2;
		long long money = 0;

		for (int i = 0; i < n; i++) {
			if (mid >= arr[i]) {
				money += arr[i];
			}
			else {
				money += mid;
			}
		}
		if (money > m) {
			right = mid - 1;
		}
		else {
			if (answer < mid) {
				answer = mid;
			}
			left = mid + 1;
		}
	}

	cout << answer;


	return 0;
}