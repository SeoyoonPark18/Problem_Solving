//BOJ 1269
#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int a, b;
	cin >> a >> b;

	int ans = a + b;
	map<int, int> listA;
	for (int i = 0; i < a; i++) {
		int num; cin >> num;
		listA[num] = 0;
	}
	for (int i = 0; i < b; i++) {
		int num; cin >> num;
		if (listA.find(num) != listA.end()) {
			ans -= 2;
		}
	}
	
	cout << ans;

	return 0;
}