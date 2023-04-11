//BOJ 11399
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int arr[1000];
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + n);

	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += arr[i] * (n - i);
	}
	cout << sum;

	return 0;
}