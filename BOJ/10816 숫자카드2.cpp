//BOJ 10816
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	unordered_map<int, int> haveCard;

	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		int num; cin >> num;
		if (haveCard.find(num) != haveCard.end()) { //found
			haveCard[num] += 1;
		}
		else {
			haveCard[num] = 1;
		}
	}

	int m; cin >> m;
	for (int i = 0; i < m; i++) {
		int num; cin >> num;
		if (haveCard.find(num) != haveCard.end()) { //found
			cout << haveCard[num] << " ";
		}
		else {
			cout << "0 ";
		}
	}
	

	


	return 0;
}