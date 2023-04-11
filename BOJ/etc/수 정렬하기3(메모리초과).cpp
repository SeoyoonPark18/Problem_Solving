//10989 수 정렬하기3
#include <vector>
#include <iostream>
using namespace std;

//quick sort algorithm
void quick(vector<int> &v, int start, int end) {
	if (start >= end)
		return;
	int pivot = start;
	int i = pivot + 1;
	int j = end;
	int temp;

	while (i <= j) {
		while (i <= end && v[i] <= v[pivot])
			i++;
		while (j > start && v[j] >= v[pivot])
			j--;
		if (i > j) {
			temp = v[j];
			v[j] = v[pivot];
			v[pivot] = temp;
		}
		else {
			temp = v[i];
			v[i] = v[j];
			v[j] = temp;
		}
	}
	quick(v, start, j - 1);
	quick(v, j + 1, end);
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;

	vector<int> v;
	for (int i = 0; i < n; i++) {
		int num; cin >> num;
		v.push_back(num);
	}

	quick(v, 0, n-1);

	for (int i = 0; i < n; i++) {
		cout << v[i] << "\n";
	}

	return 0;
}