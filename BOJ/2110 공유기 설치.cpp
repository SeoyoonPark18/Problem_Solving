//BOJ 2110
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n, c;
vector<long long> a;

bool check(long long m) {
	int router = a[0]; //
	int cnt = 1;
	for (int i = 0; i < n; i++) {
		if (a[i] - router >= m) {
			cnt += 1;
			router = a[i];
		}
		if (cnt >= c) return true;
	}
	return false;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> c;
	for (int i = 0; i < n; i++) {
		int num; cin >> num;
		a.push_back(num);
	}
	sort(a.begin(), a.end());

	long long start = 1;
	long long end = a[n - 1] - a[0];
	long long leng = 0;

	while (start <= end) {
		long long mid = (start + end) / 2;
		
		if (check(mid)) {
			leng = max(leng, mid);
			start = mid + 1;
		}
		else {
			end = mid - 1;
		}
	}

	cout << leng;

	return 0;
}