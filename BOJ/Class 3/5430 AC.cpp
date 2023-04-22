//BOJ 5430
#include <iostream>
#include <algorithm>
#include <deque>
#include <string>
#include <sstream>
using namespace std;

string arr;
deque<int> split(const string &str, char sep) {
	arr.erase(find(arr.begin(), arr.end(), '['));
	arr.erase(find(arr.begin(), arr.end(), ']'));
	deque<int> tokens;
	int i;
	stringstream ss(str);
	while (ss >> i) {
		tokens.push_back(i);
		if (ss.peek() == sep) {
			ss.ignore();
		}
	}
	return tokens;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int t; cin >> t;
	for (int i = 0; i < t; i++) {
		string p; cin >> p;
		int n; cin >> n;
		cin >> arr;
		deque<int> d = split(arr, ',');
		bool iserror = false;
		bool isreversed = false;

		for (int j = 0; j < p.size(); j++) {
			if (p[j] == 'R') {
				if (isreversed) {
					isreversed = false;
				}
				else {
					isreversed = true;
				}
			}
			else if (p[j] == 'D') {
				if (d.empty()) {
					iserror = true;
					break;
				}
				if (isreversed) {
					d.pop_back();
				}
				else {
					d.pop_front();
				}
			}
		}
		if (iserror) {
			cout << "error\n";
		}
		else {
			cout << '[';
			if (isreversed) {
				for (int k = d.size() - 1; k >= 0; k--) {
					cout << d[k];
					if (k > 0)
						cout << ',';
				}
			}
			else {
				for (int k = 0; k < d.size(); k++) {
					cout << d[k];
					if (k < d.size() - 1)
						cout << ',';
				}
			}
			cout << ']' << '\n';
		}
	}



	return 0;
}