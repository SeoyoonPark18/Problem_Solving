//BOJ 13305
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int n; cin >> n;
	int leng[100000];
	int price[100000];

	for (int i = 0; i < n-1; i++) {
		cin >> leng[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> price[i];
	}

	int sum = 0;
	int cheapest = 1000000000;
	for (int i = 0; i < n - 1; i++) {
		if (price[i] < cheapest) {
			cheapest = price[i];
		}
		sum += cheapest * leng[i];		
	}
	cout << sum;

	return 0;
}