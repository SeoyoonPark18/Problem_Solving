//BOJ 2579
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int arr[300] = { 0, };
	int sumArr[300] = { 0, };

	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		int score; cin >> score;
		arr[i] = score;
	}

	sumArr[0] = arr[0]; //10
	sumArr[1] = sumArr[0] + arr[1]; //30
	//sumArr[2] = sumArr[0] + arr[2]; //25
	sumArr[2] = max(arr[0],arr[1]) + arr[2];

	for (int i = 3; i < n; i++) {
		sumArr[i] = max(sumArr[i - 3] + arr[i - 1], sumArr[i - 2]) + arr[i];
		//30, 55, 75
	}

	cout << sumArr[n - 1];

	return 0;
}



//arr[i]= max(arr[i-1], arr[i-2]) + 
//arr[i-1]= arr[i-3]+ 