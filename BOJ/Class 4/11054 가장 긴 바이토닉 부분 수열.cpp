//BOJ 11054
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int arr[1001] = { 0, };
	int dpIn[1001] = { 0, };
	int dpDe[1001] = { 0, };
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}


	for (int right = 0; right < n; right++) {
		dpIn[right] = 1;
		for (int left = 0; left < right; left++) {
			if (arr[right] > arr[left]) {
				dpIn[right] = max(dpIn[right], dpIn[left] + 1);
			}
		}
	}

	for (int left = n - 1; left >= 0; left--) {
		dpDe[left] = 1;
		for (int right = n - 1; left < right; right--) {
			if (arr[left] > arr[right]) {
				dpDe[left] = max(dpDe[left], dpDe[right] + 1);
			}
		}
	}

	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum = max(sum, dpIn[i] + dpDe[i]);
	}
	cout << sum - 1;

	return 0;
}