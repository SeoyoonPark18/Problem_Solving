//BOJ 1966
#include <iostream>
#include <algorithm>
#include <string>
#include <queue>
using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	/*
	int test; cin >> test;
	for (int i = 0; i < test; i++) {
		
		


	}
	*/


	queue<pair<int, int>> q;
	vector<int> tmp;

	int n; cin >> n;
	int m; cin >> m;
	int cnt = 0;
	int idx = 0;
	for (int j = 0; j < n; j++) {
		int value; cin >> value;
		q.push({ j,value });
		tmp.push_back(value);
	}
	sort(tmp.begin(), tmp.end(), greater<int>());

	if (q.front().second != tmp[idx]) {
		q.push({ q.front().first, q.front().second });
		q.pop();
	}
	else {
		cnt++;
		idx++;
		if (q.front().first == m) {
			cout << cnt << '\n';
		}
		q.pop();
	}


	return 0;
}