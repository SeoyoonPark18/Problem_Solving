//BOJ 1654
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	vector<long long> v;
	long long ans;

	int k; long long n;
	cin >> k >> n;
	for (int i = 0; i < k; i++) {
		long long l; cin >> l;
		v.push_back(l);
	}

	sort(v.begin(), v.end());

	long long start = 1;
	long long end = v[k - 1];
		
	while (start <= end) {
		long long mid = (start + end) / 2;
		long long cnt = 0;
		for (int i = 0; i < k; i++) {
			cnt += v[i] / mid;
		}

		if (cnt < n) {
			end = mid - 1;
		}
		else {
			ans = mid;
			start = mid + 1;
		}
	}
	
	cout << ans;

	return 0;
}