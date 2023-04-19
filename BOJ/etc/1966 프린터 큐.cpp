//BOJ 1966
#include <iostream>
#include <algorithm>
#include <string>
#include <queue>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int test; cin >> test;
	for (int i = 0; i < test; i++) {
		queue<pair<int, int>> q;
		vector<int> tmp;

		int n; cin >> n;
		int m; cin >> m;
		int cnt = 0;
		for (int j = 0; j < n; j++) {
			int value; cin >> value;
			q.push({ j,value });
			tmp.push_back(value);
		}
		sort(tmp.begin(), tmp.end(), greater<int>());

		while (1) {
			if (q.front().second != tmp[cnt]) {
				q.push({ q.front().first, q.front().second });
				q.pop();
			}
			else {
				cnt++;
				if (q.front().first == m) {
					cout << cnt << '\n';
					break;
				}
				q.pop();
			}
		}
	}

	return 0;
}