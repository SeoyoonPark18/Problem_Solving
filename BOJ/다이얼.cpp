//น้มุ 5622
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

int main() {
	string s;
	cin >> s;
	int cnt = 0;

	for (int i = 0; i < s.length(); i++) {
		if (s[i] >= 65 && s[i] <= 67) {
			cnt += 2 + 1;
		}
		else if (s[i] >= 68 && s[i] <= 70) {
			cnt += 3 + 1;
		}
		else if (s[i] >= 71 && s[i] <= 73) {
			cnt += 4 + 1;
		}
		else if (s[i] >= 74 && s[i] <= 76) {
			cnt += 5 + 1;
		}
		else if (s[i] >= 77 && s[i] <= 79) {
			cnt += 6 + 1;
		}
		else if (s[i] >= 80 && s[i] <= 83) {
			cnt += 7 + 1;
		}
		else if (s[i] >= 84 && s[i] <= 86) {
			cnt += 8 + 1;
		}
		else if (s[i] >= 87 && s[i] <= 90) {
			cnt += 9 + 1;
		}
	}
	cout << cnt;
	return 0;
}

/*

*/