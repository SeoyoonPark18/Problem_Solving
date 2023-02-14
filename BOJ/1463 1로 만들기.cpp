//BOJ 1463
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int n; cin >> n;	
	int arr[1000001];

	arr[0] = 0;
	arr[1] = 0; //x==1
	arr[2] = 1; //x==2
	arr[3] = 1; //x==3
	for (int i = 4; i <= n; i++) {
		arr[i] = arr[i - 1] + 1;
		if (i % 3 == 0) {
			arr[i] = min(arr[i / 3] + 1, arr[i]);
		}
		if (i % 2 == 0) {
			arr[i] = min(arr[i / 2] + 1, arr[i]);
		}


		/*
		int x = i;
		if (x % 3 == 0) {
			x = x / 3;
			if (arr[x] <= arr[i - 1]) {
				arr[i] = arr[x] + 1;
			}
			else {
				arr[i] = arr[i-1] + 1;
			}
		}
		if (x % 2 == 0) {
			x = x / 2;
			if (arr[x] <= arr[i - 1]) {
				arr[i] = arr[x] + 1;
			}
			else {
				arr[i] = arr[i - 1] + 1;
			}
		}	
		*/
	}
	
	cout << arr[n];

	return 0;
}

