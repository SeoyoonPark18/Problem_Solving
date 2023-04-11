//BOJ 18870
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n; cin >> n;
	vector<int> vv;
	vector<int> v;

	for (int i = 0; i < n; i++) {
		int num; cin >> num;
		vv.push_back(num); //original:  1000 999 1000 999 1000 999
		v.push_back(num); //to sort
	}

	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()), v.end()); //999 1000

	for (auto&& x : vv) {
		cout << lower_bound(v.begin(), v.end(), x) - v.begin() << " ";
	}

	/* time over
	for (int i = 0; i < vv.size(); i++) {
		for (int j = 0; j < v.size(); j++) {
			if (vv[i] == v[j]) {
				cout << j << " ";
			}
		}
	}
	*/

	return 0;
}