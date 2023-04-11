//BOJ 1427
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n; cin >> n; //2143
	int num = n;
	vector<int> v;

	while (num > 9) {
		v.push_back(num % 10);
		num = num / 10; //214,21,2
	}
	v.push_back(num);

	sort(v.rbegin(), v.rend());
	for (int i = 0; i < v.size(); i++) {
		cout << v[i];
	}


	return 0;
}