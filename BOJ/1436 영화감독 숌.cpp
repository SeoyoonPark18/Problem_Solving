//BOJ 1436
#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n; cin >> n;
	int currentNum = 666;

	for (int i = 0; i < n; i++) {
		while (1) {
			string s = to_string(currentNum);
			bool found = s.find("666") != string::npos;

			if (found && (i == n - 1)) {
				cout << currentNum;
				break;
			}
			else {
				currentNum++;
			}
		}
		
	}
	//cout << currentNum;

	return 0;
}