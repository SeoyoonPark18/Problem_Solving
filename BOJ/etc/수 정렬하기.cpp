//2750 수 정렬하기
#include <vector>
#include <iostream>
using namespace std;



int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n; cin >> n;
	vector<int> v;
	for (int i = 0; i < n; i++) {
		int num; cin >> num;
		v.push_back(num);
	}

	//insertion sort algorithm
	for (int i = 1; i < n; i++) {
		for (int j = i; j > 0; j--) {
			if (v[j - 1] > v[j]) {
				int tmp = v[j];
				v[j] = v[j - 1];
				v[j - 1] = tmp;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << v[i] << "\n";
	}

	return 0;
}