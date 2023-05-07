//BOJ 1629
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

long long a, b, c;

long long multiply(long long bb) {

	if (bb == 1) {
		return a % c;
	}

	long long mid = bb / 2;
	long long mul = multiply(mid);
	long long result = mul * mul % c;

	if (bb % 2 == 1) {
		result = (result * a) % c;
	}
	return result;
}


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> a >> b >> c;
	cout << multiply(b);


	return 0;
}