//10870 피보나치 수 5
#include <iostream>
using namespace std;


int fibo(int num) {
	if (num >= 2) {
		num = fibo(num - 1) + fibo(num - 2);
	}
	return num;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int ans = fibo(n);
	cout << ans;
	
	return 0;
}