#include <iostream>
using namespace std;

int main() {

	int l, p, v;
	int caseNum = 0;

	while (1) {
		cin >> l >> p >> v;

		if (l == 0 && p == 0 && v == 0)
			break;

		int days = (v / p) * l;
		days += v % p > l ? l : v % p; //�� ����!
		++caseNum;

		cout << "Case " << caseNum << ": " << days << endl;
	}


	return 0;
}