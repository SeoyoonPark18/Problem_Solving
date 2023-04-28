//BOJ 2630
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int arr[128][128];

void check(int n) {
	bool isblue = false;

	if (n == 1) {

	}
	else {
		check(n / 2);
	}

}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N; cin >> N;
	int n = N;
	int white = 0; int blue = 0;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> arr[i][j];
		}
	}




	return 0;
}