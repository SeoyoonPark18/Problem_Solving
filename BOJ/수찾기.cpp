#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main() {

	int n, m;
	int n_arr[100000];

	//cin >> n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		//cin >> n_arr[i];
		scanf("%d", &n_arr[i]);
	}
	sort(n_arr, n_arr + n);

	//cin >> m;
	scanf("%d", &m);
	int num;
	for (int i = 0; i < m; i++) {
		//cin >> num;
		scanf("%d", &num);
		int left = 0;
		int right = n - 1;
		int mid;

		if (num <= n_arr[n - 1]) {

			while (left <= right) {
				mid = (left + right) / 2;

				if (n_arr[mid] < num) {
					left = mid + 1;
				}
				if (n_arr[mid] > num) {
					right = mid - 1;
				}
				if (n_arr[mid] == num) {
					printf("1\n");
					break;
				}
			}
			if (n_arr[mid] != num) {
				printf("0\n");
			}

		}
		else {
			//cout << "0\n";
			printf("0\n");
		}


	}
	return 0;
}