//น้มุ 2675
#include <iostream>
#include <string>
using namespace std;

int main() {
	int t; cin >> t;
	string s[1000];
	int r[1000];
	for (int i = 0; i < t; i++) {
		cin >> r[i] >> s[i];

		for (int j = 0; j < s[i].length(); j++) {
			int rr = r[i];
			while (rr > 0) {
				cout << s[i].at(j);
				rr--;
			}
		}
		cout << "\n";
	}



	return 0;
}

/*

*/