//น้มุ 2908
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

int main() {
	string a, b;
	cin >> a >> b;

	string aa, bb;
	for (int i = 2; i >= 0; i--) {
		aa += a[i];
		bb += b[i];
	}
	int int_a = stoi(aa);
	int int_b = stoi(bb);
	if (int_a > int_b) {
		cout << int_a;
	}
	else {
		cout << int_b;
	}

	return 0;
}

/*

*/