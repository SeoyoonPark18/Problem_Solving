#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	int num; cin >> num;
	int rope[100000];
	int sum = 0;

	for (int i = 0; i < num; i++) {
		cin >> rope[i];

	}
	sort(rope, rope + num);

	for (int j = 0; j < num; j++) {
		if (sum < (num - j) * rope[j])
			sum = (num - j) * rope[j];
	}

	cout << sum;

	return 0;
}