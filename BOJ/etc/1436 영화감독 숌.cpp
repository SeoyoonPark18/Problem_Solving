//BOJ 1436
#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n; cin >> n;
	int cnt = 0;
	int currentNum = 666;

	while (1) {
		string s = to_string(currentNum);
		bool found = s.find("666") != string::npos;

		if (found) {
			cnt++;
			if (cnt == n) {
				cout << currentNum;
				break;
			}
			else {
				currentNum++;
			}

		}
		else {
			currentNum++;
		}
	}


	return 0;
}