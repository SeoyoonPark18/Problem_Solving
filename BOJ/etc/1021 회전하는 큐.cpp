//BOJ 1021
#include <iostream>
#include <algorithm>
#include <deque>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	deque<int> d;

	int n, m;
	cin >> n >> m;
	int sum = 0;

	for (int i = 1; i <= n; i++) {
		d.push_back(i);
	}
	for (int i = 0; i < m; i++) {
		int pos; cin >> pos;
		int cnt = 0;
		int leng = d.size();
		while (1) {
			if (d.front() != pos) {
				d.push_back(d.front());
				d.pop_front();
				cnt++;
			}
			else {
				d.pop_front();
				break;
			}
		}		
		int s = min(cnt, leng - cnt);
		sum += s;
	}

	cout << sum;



	return 0;
}