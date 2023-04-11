//BOJ 11478
#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	string s;
	cin >> s;
	int n = s.length();

	map<string, bool> m;

	for (int i = 1; i <= n; i++) { 
		for (int j = 0; j <= n - i; j++) {
			string sub = s.substr(j, i);
			m[sub] = true;
		}
	}

	cout << m.size();

	return 0;
}