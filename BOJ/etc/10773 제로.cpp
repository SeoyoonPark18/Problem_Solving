//BOJ 10773
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
	int sum = 0;

	for (int i = 0; i < n; i++) {
		int num; cin >> num;
		if (num != 0) {
			stack.push(num);
			sum += num;
		}
		else {
			sum -= stack.top();
			stack.pop();
		}
	}

	cout << sum;


	return 0;
}