//BOJ 1912
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> v;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n; cin >> n;
	int sum = 0; int max = -1000;
	for (int i = 0; i < n; i++) {
		int num; cin >> num;

		sum += num;
		if (sum > max) {
			max = sum;
		}
		if (sum < 0) {
			sum = 0;
		}
	}
	
	cout << max;
	

	return 0;
}