//BOJ 1181
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n; cin >> n;
	
	map<string, int> m;
	vector<pair<int, string>> v;
	string s;

	for (int i = 0; i < n; i++) {
		cin >> s;
		int cnt = s.length();
		m[s] = cnt; //{but,3}
	}

	for (auto it = m.begin(); it != m.end(); it++) {
		string sm = it->first;
		int im = it->second;
		v.push_back(make_pair(im, sm));
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < v.size(); i++) {
		cout << v[i].second << "\n";
	}

	return 0;
}