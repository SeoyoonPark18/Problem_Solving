//น้มุ 4673
#include <iostream>
using namespace std;

bool arr[10001] = { false };

int selfNumber(int n) {
	int temp = n;
	while (n != 0) {
		temp += n % 10;
		n /= 10;
	}
	if (temp < 10000)
		return temp;
}

int main() {

	int tmp;
	for (int i = 1; i < 10001; i++) {
		tmp = selfNumber(i);
		arr[tmp] = true;
	}
	for (int i = 1; i < 10001; i++) {
		if (arr[i] == 0) {
			cout << i << "\n";
		}
	}

	return 0;
}
