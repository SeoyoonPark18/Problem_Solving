//2751 수 정렬하기2
#include <iostream>
#include <algorithm>
using namespace std;

int arr[1000000] = { 0, };

void quickSort(int start, int end) {
	if (start >= end) return;
	int pivot = start;
	int i = pivot + 1;
	int j = end;
	int temp;

	while (i <= j) {
		while (i <= end && arr[i] <= arr[pivot])
			i++;
		while (j > start && arr[j] >= arr[pivot])
			j--;
		if (i > j) {
			temp = arr[j];
			arr[j] = arr[pivot];
			arr[pivot] = temp;
		}
		else {
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}

	quickSort(start, j - 1);
	quickSort(j + 1, end);
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	quickSort(0, n-1);

	for (int i = 0; i < n; i++) {
		cout << arr[i] << "\n";
	}

	return 0;
}