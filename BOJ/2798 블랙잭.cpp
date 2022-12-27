//BOJ 2798
#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n; int m;
	cin >> n >> m;
	vector <int> v;
	int card;
	for (int i = 0; i < n; i++) {
		cin >> card;
		v.push_back(card);
	}

	int sum = 0;
	int max = 0;
	for (int i = 0; i < n-2; i++) {
		for (int j = i+1; j < n-1; j++) {
			for (int k = j+1; k < n; k++) {
				sum = v[i] + v[j] + v[k];
				if ((sum <= m) && (sum > max)) {
					max = sum;
				}

			}
		}
	}
	cout << max;

	return 0;
}