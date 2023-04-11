//BOJ 1541
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	string s; cin >> s;
	
	int sum = 0;
	int num = 0;
	string tmp = "";
	bool isMinus = false;

	for (int i = 0; i <= s.length(); i++) {
		if (s[i] == '-' || s[i] == '+' || i == s.length()) {
			num = stoi(tmp);
			tmp = "";

			if (isMinus) {
				sum -= num;
			}
			else {
				sum += num;
			}

			if (s[i] == '-') isMinus = true;
		}
		else {
			tmp += s[i];
		}

		
	}

	cout << sum;

	return 0;
}