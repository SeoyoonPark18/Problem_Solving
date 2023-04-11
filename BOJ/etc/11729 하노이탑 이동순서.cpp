//BOJ 11729
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<pair<int, int>> v;

void recursion(int n, int a, int b, int c) {
	if (n == 1) {
		//cout << a << " " << c << "\n";
		v.push_back({ a,c });
		return;
	}

	recursion(n - 1, a, c, b);
	//cout << a << " " << c << "\n";
	v.push_back({ a,c });
	recursion(n - 1, b, a, c);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int n; cin >> n;
	recursion(n, 1, 2, 3);
	
	cout << v.size() << "\n";
	for (int i = 0; i < v.size(); i++) {
		cout << v[i].first << " " << v[i].second << "\n";
	}

	return 0;
}