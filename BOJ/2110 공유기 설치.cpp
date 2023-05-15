//BOJ 2110
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	vector<int> v;
	int len = 0;

	int n; int c;
	cin >> n >> c;
	for (int i = 0; i < n; i++) {
		int num; cin >> num;
		v.push_back(num);
	}

	sort(v.begin(), v.end());

	int start =0;
	int end = n - 1;
		
	while (start <= end) {
		int mid = (start + end) / 2;

		if (cnt < n) {
			end = mid - 1;
		}
		else {
			ans = mid;
			start = mid + 1;
		}
	}
	
	cout << len;

	return 0;
}