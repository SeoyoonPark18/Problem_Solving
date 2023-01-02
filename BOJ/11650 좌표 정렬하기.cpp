//BOJ 11650
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n; cin >> n;
	int x, y;
	vector<pair<int, int>> vv;
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		vv.push_back(make_pair(x, y));
	}

	sort(vv.begin(), vv.end());
	for (int i = 0; i < n; i++) {
		cout << vv[i].first << " " << vv[i].second << endl;
	}

	/*
	int min = vv[0].first;
	for (int j = 1; j < n-1; j++) {
		int min = vv[j].first;
		if (vv[j].first < min) {

		}
	}
	*/

	return 0;
}