//BOJ 11651
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n; cin >> n;
	int x, y;
	vector<pair<int, int>> vv;
	for (int i = 0; i < n; i++) {

		cin >> x >> y;
		vv.push_back(make_pair(y, x)); //reverse
		//vv.emplace_back(x, y);
	}

	sort(vv.begin(), vv.end()); //sort by y order

	for (int i = 0; i < n; i++) {
		cout << vv[i].second << " " << vv[i].first << "\n";
	}

	return 0;
}