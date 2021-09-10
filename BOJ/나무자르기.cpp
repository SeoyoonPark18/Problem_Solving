#include <iostream>
#include <algorithm>
using namespace std;

int n;
long long m; //long long 자료형 필수
long long tree[1000000];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> tree[i];
	}
	sort(tree, tree + n);

	long long left, right, mid, length;
	long long answer = 0;
	left = 1;
	right = tree[n - 1];

	while (left <= right) {
		length = 0;
		mid = (left + right) / 2; //내부 초기화

		for (int i = 0; i < n; i++) {
			if (tree[i] > mid) { //중간값보다 나무가 큰 경우만
				length += tree[i] - mid;
			}
		}
		if (length >= m) {
			if (answer < mid)
				answer = mid;
			left = mid + 1;
		}
		if (length < m) {
			right = mid - 1;
		}
	}
	cout << answer;

	return 0;
}