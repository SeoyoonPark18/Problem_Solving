#include <iostream>
using namespace std;

long long fibo[91] = { 0,1, }; //피보나치 수열은 n이 커질수록 값이 급속도로 증가하므로 long long 사용

long long fibonacci(int number) {
	if (number == 0 || number == 1)
		return fibo[number];
	else {
		fibo[number] = fibonacci(number - 1) + fibonacci(number - 2);
		return fibo[number];
	}

}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int n; cin >> n;
	cout << fibonacci(n);

}//시간초과