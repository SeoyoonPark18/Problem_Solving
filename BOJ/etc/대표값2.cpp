//2587 ´ëÇ¥°ª2
#include <vector>
#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int arr[5];
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
		sum += arr[i];
	}
	int avg = sum / 5;

	for (int i = 1; i < 5; i++) {
		for (int j = i; j > 0; j--) {
			if (arr[j - 1] > arr[j]) {
				int tmp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = tmp;
			}
		}
	}

	cout << avg << "\n";
	cout << arr[2];



	return 0;
}