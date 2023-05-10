//BOJ 10830
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

long long **arr;
long long **arr2;
long long **ans;
long long n, b;

void multiply(long long bb) {

	if (bb == 1) {
		return;
	}

	multiply(bb / 2);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			long long sum = 0;
			for (int k = 0; k < n; k++) {
				sum += arr2[i][k] * arr2[k][j];
			}
			ans[i][j] = sum;
		}
	}

	if (bb % 2) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				long long sum = 0;
				for (int k = 0; k < n; k++) {
					sum += arr[i][k] * ans[k][j];
				}
				arr2[i][j] = sum % 1000;
			}
		}
	}
	else {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				arr2[i][j] = ans[i][j] % 1000;
			}
		}
	}

}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> b;
	arr = new long long*[n];
	arr2 = new long long*[n];
	ans = new long long*[n];

	for (int i = 0; i < n; i++) {
		arr[i] = new long long[n];
		arr2[i] = new long long[n];
		ans[i] = new long long[n];
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
			arr2[i][j] = arr[i][j];
			ans[i][j] = 0;
		}
	}

	multiply(b);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << arr2[i][j] % 1000 << ' ';
		}
		cout << '\n';
	}


	return 0;
}