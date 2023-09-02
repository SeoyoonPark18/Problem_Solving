//BOJ 11286
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <cmath>
using namespace std;

struct cmp {
	bool operator()(int a, int b) {
		if (abs(a) > abs(b)) return true;
		else if (abs(a) == abs(b)) {
			if (a > b) return true;
			else
				return false;
		}
		return false;
	}
};

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	priority_queue<int, vector<int>, cmp> pq;

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