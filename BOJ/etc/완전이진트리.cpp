#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int k;
vector <int> arr;
vector <int> answer[11];

void search(int s, int e, int d) {
	if (s == e) {
		answer[d].push_back(arr[s]);
		return;
	}
	int mid = (e + s) / 2;
	answer[d].push_back(arr[mid]); //중위 순회라 가운데 값이 root

	search(s, mid - 1, d + 1);
	search(mid + 1, e, d + 1);
}

int main() {
	cin >> k;

	for (int i = 0; i < pow(2, k) - 1; i++) { //노드개수, 2의 k승 -1
		int num;
		cin >> num;
		arr.push_back(num);
	}

	search(0, arr.size() - 1, 0);

	for (int i = 0; i < k; i++) {
		for (int j = 0; j < answer[i].size(); j++) {
			cout << answer[i][j] << " ";
		}
		cout << endl;
	}
}