//BOJ 1764
#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, m;
	cin >> n >> m;
	map<string, int> list;
	int cnt = 0;

	for (int i = 0; i < n; i++) {
		string s; cin >> s;
		list[s] = 0;
	}
	for (int i = 0; i < m; i++) {
		string s; cin >> s;
		if (list.find(s) != list.end()) {
			list[s]++;
			cnt++;
		}
	}

	cout << cnt << "\n";
	for (map<string, int>::iterator iter = list.begin(); iter != list.end(); iter++) {
		if (iter->second > 0) {
			cout << iter->first << "\n";
		}
	}

	return 0;
}