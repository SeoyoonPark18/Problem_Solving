//BOJ 2559
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int arr[100001] = { 0, };
	int sumArr[100001] = { 0, };
	int maxS = -100000;
	int n; int k;
	cin >> n >> k;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
		
		if (i >= k) {
			sumArr[i] = sumArr[i - 1] + arr[i] - arr[i - k];
			maxS = max(maxS, sumArr[i]);
		}
		else {
			sumArr[i] = sumArr[i - 1] + arr[i];
		}

	}

	cout << maxS;





	return 0;
}