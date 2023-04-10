//BOJ 11054
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int arr[1001] = { 0, };
	int dpIn[1001] = { 0, };
	int dpDe[1001] = { 0, };
	int n; cin >> n;	
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}


	for (int i = 1; i <= n; i++) {


		for (int j = 1; j <= n; j++) {
			if (j < i && arr[i] > arr[j]) {
				dpIn[i] = max(dpIn[i], dpIn[j] + 1);
			}
			
			if (j > i) {

			}
		}
	}




	return 0;
}