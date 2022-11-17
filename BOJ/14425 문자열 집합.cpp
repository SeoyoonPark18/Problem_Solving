//14425
#include <iostream>
#include <unordered_set>
#include <string>
#include <vector>
using namespace std;

int main() {

	//map<string, int> nstring;
	//map<string, int> mstring;
	unordered_set<string> set;
	int n; int m;
	cin >> n >> m;
	string s;
	int cnt = 0;

	for (int i = 0; i < n; i++) {
		cin >> s;
		set.insert(s);
	}

	for (int i = 0; i < m; i++) {
		cin >> s;
		if (set.find(s) != set.end()) {
			cnt++;
		}
	}

	/*
	for (map<string, int>::iterator it = mstring.begin(); it != mstring.end(); it++) {
		auto iter = nstring.find(it->first);
		if (iter != nstring.end()) { //if found
			cnt++;
		}
	}
	*/
	cout << cnt;

	return 0;
}