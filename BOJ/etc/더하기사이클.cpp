//백준 1110
#include <iostream>
using namespace std;

int n;
int n2 = 0;
int cnt = 0;

void cycle(int num) {


	if (num > 9) {
		if ((num / 10 + num % 10) > 9) {
			n2 = (num % 10) * 10 + (num / 10 + num % 10) % 10;
			cnt++;
			if (n != n2) {
				cycle(n2);
			}
			else {
				cout << cnt;
			}

		}
		else {
			n2 = (num % 10) * 10 + (num / 10 + num % 10);
			cnt++;
			if (n != n2) {
				cycle(n2);
			}
			else {
				cout << cnt;
			}
		}
	}
	else {
		n2 = num * 10 + num;
		cnt++;
		if (n != n2) {
			cycle(n2);
		}
		else {
			cout << cnt;
		}
	}


}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); //속도 향상용

	cin >> n;
	cycle(n);

	return 0;
}