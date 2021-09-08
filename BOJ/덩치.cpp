#include <iostream>
using namespace std;

int main() {

	int n; cin >> n;
	int people[50][2];

	int rank[50];
	for (int i = 0; i < n; i++) {
		rank[i] = 1;
	}//기본 등수 1로 설정

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 2; j++) {
			cin >> people[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if ((people[i][0] < people[j][0]) && (people[i][1] < people[j][1])) {
				rank[i]++;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		cout << rank[i] << " ";
	}


	return 0;
}