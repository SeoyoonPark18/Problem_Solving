//น้มุ 1065
#include <iostream>
using namespace std;

int cnt = 0;

void num(int nn) {
	if (nn < 100) {
		cnt++;
	}
	else if (nn == 1000) {

	}
	else {
		int tmp[3];
		int i = 0;
		while (nn != 0) {
			tmp[i] = nn % 10;
			nn /= 10;
			i++;
		}
		if (tmp[0] + tmp[2] == tmp[1] * 2) {
			cnt++;
		}
	}
}

int main() {
	int n;
	cin >> n;
	for (int i = 1; i < n + 1; i++) {
		num(i);
	}
	cout << cnt;

	return 0;
}
