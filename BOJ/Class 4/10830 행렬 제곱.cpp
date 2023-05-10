//BOJ 10830
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

long long a[25];
long long arr[25] = { 0, };
long long n, b;
long long c = 1000;

long long* multiply(long long mul[]) { 
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			int idx = i * n + j;
			int cur = 0;
			arr[idx] = 0;
			while (cur < n) {
				arr[idx] += mul[i*n + cur] * mul[cur*n + j] % c;
			}
		}
	}
	return arr;
}
long long* multiplyA(long long mul[]) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			int idx = i * n + j;
			int cur = 0;
			arr[idx] = 0;
			while (cur < n) {
				arr[idx] += mul[i*n + cur] * a[cur*n + j] % c;
			}
		}
	}
	return arr;
}

long long* rowcol(long long bb) {

	if (bb == 1) {
		return  a;
	}

	long long mid = bb / 2;
	long long* mul = rowcol(mid); 
	long long* result; 

	if (bb % 2 == 1) {
		result = multiplyA(mul);
	}
	else {
		result = multiply(mul);
	}
	return result;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	cin >> n >> b;
	for (int i = 0; i < n*n; i++) {
		cin >> a[i];
	}

	long long* ptr =rowcol(b);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << ptr[i*n + j] << ' ';
		}
		cout << '\n';
	}
	

	return 0;
}