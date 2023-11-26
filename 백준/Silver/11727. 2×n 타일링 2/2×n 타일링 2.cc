//BOJ 11727
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int arr[1001];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n; cin >> n;

	arr[1] = 1;
	arr[2] = 3;
	for (int i = 3; i <= n; i++) {
		arr[i] = (arr[i - 1] + 2 * arr[i - 2]) % 10007;
	}
	cout << arr[n];

	return 0;
}
/*
점화식 규칙 발견하기!
어려우면 직접 n=1,2,3,4 정도 까지 계산 후 사칙연산 규칙 찾아보기
*/