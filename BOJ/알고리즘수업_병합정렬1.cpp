//BOJ 24060
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n; int k;
int arr[500000];
int res[500000];
int cnt = 0; int value;

void merge(int left, int right);
void mergeSort(int left, int right);

void mergeSort(int left, int right) {
	if (left < right) {
		int mid = (left + right) / 2;
		mergeSort(left, mid);
		mergeSort(mid + 1, right);
		merge(left, right);
	}
}
void merge(int left, int right) {
	int first = left;
	int mid = (left + right) / 2;
	int second = mid + 1;
	int idx = first;

	while (first <= mid && second <= right) {
		if (arr[first] > arr[second]) {
			res[idx++] = arr[second++];
			cnt++;
			if (cnt == k) value = res[idx-1];
		}
		else {
			res[idx++] = arr[first++];
			cnt++;
			if (cnt == k) value = res[idx - 1];
		}
		
	}
	if (first > mid) {
		while (idx <= right) {
			res[idx++] = arr[second++];
			cnt++;
			if (cnt == k) value = res[idx - 1];
		}
	}
	else {
		while (idx <= right) {
			res[idx++] = arr[first++];
			cnt++;
			if (cnt == k) value = res[idx - 1];
		}
	}
	for (int i = left; i <= right; i++) {
		arr[i] = res[i];
	}

	
	
}


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
		
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	mergeSort(0, n - 1);
	
	if (cnt < k) {
		cout << -1;
	}
	else {
		cout << value;
	}


	return 0;
}