//25305 커트라인
#include <vector>
#include <iostream>
using namespace std;



int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n; int k;
	cin >> n >> k;
	
	vector<int> score;
	for (int i = 0; i < n; i++) {
		int num; cin >> num;
		score.push_back(num);
	}

	for (int i = 1; i < n; i++) {
		for (int j = i; j > 0; j--) {
			if (score[j - 1] > score[j]) {
				int tmp = score[j];
				score[j] = score[j - 1];
				score[j - 1] = tmp;
			}
		}
	}

	cout << score[n - k];

	return 0;
}