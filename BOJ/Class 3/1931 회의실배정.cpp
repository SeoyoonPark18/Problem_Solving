//BOJ 1931
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n; cin >> n;
	vector<pair<int, int>> p;
	//vector<int> v;

	for (int i = 0; i < n; i++) {
		int s, e; cin >> s >> e;
		p.push_back({ e,s }); //change input position
	}
	sort(p.begin(), p.end());

	int next = 0; int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (p[i].second >= next) {
			next = p[i].first;
			cnt++;
		}
	}
	cout << cnt;


	/*
	int last = p[n - 1].second; //14
	for (int i = 0; i < last+1; i++) {
		v.push_back(0);
	}

	int maxN = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= p[i].first; j++) {
			int idx = p[i].second;
			v[idx] = max(v[idx], v[j] + 1);
			maxN = max(maxN, v[idx]);
		}
	}
	*/


	return 0;
}