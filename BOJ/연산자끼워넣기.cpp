#include <iostream>
using namespace std;

int n;
int arrNum[11];
int arrOper[4];
int mymax = -1000000001;
int mymin = 1000000001;

void result(int num, int idx) {

	if (idx == n) {
		if (num > mymax)
			mymax = num;
		if (num < mymin)
			mymin = num;
		return;
	}

	for (int i = 0; i < 4; i++) {
		if (arrOper[i] > 0) {
			arrOper[i]--; //연산자 하나 줄여줌
			if (i == 0)
				result(num + arrNum[idx], idx + 1);
			else if (i == 1)
				result(num - arrNum[idx], idx + 1);
			else if (i == 2)
				result(num * arrNum[idx], idx + 1);
			else
				result(num / arrNum[idx], idx + 1);
			arrOper[i]++;
		}
	}
	return;
}

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arrNum[i];
	}
	for (int i = 0; i < 4; i++) {
		cin >> arrOper[i];
	}
	result(arrNum[0], 1);

	cout << mymax << endl;
	cout << mymin;
	return 0;
}