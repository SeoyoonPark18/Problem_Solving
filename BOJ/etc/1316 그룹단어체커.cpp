#include <iostream>
#include <string>
using namespace std;

int cnt = 0;

void GroupWord(string s) {
	bool check = true;
	for (int j = 0; j < s.length(); j++) {
		for (int k = j+1; k < s.length(); k++) {
			if (s[j] == s[k] && s[j] != s[k - 1]) {
				check = false;
				break;
			}
		}
	}
	if (check == true) {
		cnt++;
	}
}

int main() {
	int n;
	string s;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		GroupWord(s);
	}
	cout << cnt;

	return 0;
}