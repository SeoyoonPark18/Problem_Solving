#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

const int MAX = 300000;

int main() {

	int n, k;
	pair <int, int> jewel[MAX];
	int bag[MAX];
	priority_queue <int> tmp;
	int value = 0;
	int index = 0;

	void greedy() {
		for (int i = 0; i < k; i++) {
			while (index < n && bag[i] >= jewel[index].first) {
				tmp.push(jewel[index++].second);
			}
			if (!tmp.empty()) {
				value += tmp.top();
				tmp.pop();
			}
		}
	}

	int main() {
		cin >> n >> k;
		for (int i = 0; i < n; i++) {
			cin >> jewel[i].first >> jewel[i].second;
		}
		for (int j = 0; j < k; j++) {
			cin >> bag[j];
		}
		sort(jewel, jewel + n);
		sort(bag, bag + k);
		greedy();

		cout << value << endl;
	}

	return 0;
}