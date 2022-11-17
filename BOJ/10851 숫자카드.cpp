//10851
#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {

	map<int, int> card;
	map<int, int> mcard;
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		int num; cin >> num;
		card[num] = i;
	}
	int m; cin >> m;
	for (int i = 0; i < m; i++) {
		int num; cin >> num;
		mcard[i] = num;
	}

	for (map<int, int>::iterator it = mcard.begin(); it != mcard.end(); it++) {
		auto iter = card.find(it->second);
		if (iter != card.end()) { //if found
			cout << "1 ";
		}
		else {
			cout << "0 ";
		}
	}


	return 0;
}