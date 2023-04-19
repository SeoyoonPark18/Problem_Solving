//BOJ 10866
#include <iostream>
#include <algorithm>
#include <string>
#include <deque>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	deque<int> d;

	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		string s; int num;
		cin >> s;

		if (s == "push_front") {
			cin >> num;
			d.push_front(num);
		}
		else if (s == "push_back") {
			cin >> num;
			d.push_back(num);
		}
		else if (s == "pop_front") {
			if (d.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << d.front() << '\n';
				d.pop_front();
			}
		}
		else if (s == "pop_back") {
			if (d.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << d.back() << '\n';
				d.pop_back();
			}
		}
		else if (s == "size") {
			cout << d.size() << '\n';
		}
		else if (s == "empty") {
			if (d.empty()) {
				cout << 1;
			}
			else {
				cout << 0;
			}
			cout << '\n';
		}
		else if (s == "front") {
			if (d.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << d.front() << '\n';
			}
		}
		else if (s == "back") {
			if (d.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << d.back() << '\n';
			}
		}
	}
	


	return 0;
}