//BOJ 11650
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
		vv.push_back(make_pair(x, y));
		//vv.emplace_back(x, y);
	}

	//sort(vv.begin(), vv.end(), compare); //sort by y order
	sort(vv.begin(), vv.end()); //sort by x order


	for (int i = 0; i < n; i++) {
		cout << vv[i].first << " " << vv[i].second << "\n";
	}

	return 0;
}