//BOJ 1927
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	priority_queue<int, vector<int>, greater<int>> pq;

	int n; cin >> n;
	int x;
	for (int i = 0; i < n; i++) {
		cin >> x;
		if (x == 0) {
			if (pq.empty()) {
				cout << 0 << '\n';
			}
			else {
				cout << pq.top() << '\n';
				pq.pop();
			}
		}
		else {
			pq.push(x);
		}
	}




	return 0;
}