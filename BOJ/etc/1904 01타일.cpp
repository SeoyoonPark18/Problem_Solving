//BOJ 1904
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

vector<int> v;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n; cin >> n;

	v.push_back(1); //idx 0
	v.push_back(1); //1
	for (int i = 2; i <= n; i++) {
		int num = v[i - 1] % 15746 + v[i - 2] % 15746;
		v.push_back(num);
	}

	cout << v[n] % 15746;




	return 0;
}