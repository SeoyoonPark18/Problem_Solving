//BOJ 24416
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int recursion(int x) {
	if (x == 1 || x == 2) {
		return 1;
	}
	else {
		return recursion(x - 1) + recursion(x - 2);
	}

	
}

int arr[100];
int dp(int x) {
	arr[0] = 1;
	arr[1] = 1;
	for (int i = 2; i < x; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
		//std::cout << arr[i];
	}
	return arr[x];
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n;
	cin >> n;

	int num = n - 2;
	cout << recursion(n) << ' ' << num;


	return 0;
}