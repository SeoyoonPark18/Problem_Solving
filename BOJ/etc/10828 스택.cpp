//BOJ 10828
#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	stack<int> stack;

	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		string s; int num;
		cin >> s;
		if (s == "push") {
			cin >> num;
			stack.push(num);
		}
		else if (s == "pop") {
			if (stack.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << stack.top() << '\n';
				stack.pop();
			}	
		}
		else if (s == "size") {
			cout << stack.size() << '\n';
		}
		else if (s == "empty") {
			if (stack.empty()) {
				cout << 1;
			}
			else {
				cout << 0;
			}
			cout << '\n';
		}
		else if (s == "top") {
			if (stack.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << stack.top() << '\n';
			}
			
		}
	}





	return 0;
}