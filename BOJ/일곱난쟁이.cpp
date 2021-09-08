#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	int height[9];
	int sum = 0;

	for (int i = 0; i < 9; i++) {
		cin >> height[i];
		sum += height[i];
	}
	int rest = sum - 100;
	sort(height, height + 9);

	for (int i = 0; i < 9 - 1; i++) {
		for (int j = 0; j < 9; j++) {
			if (height[i] + height[j] == rest) {
				for (int k = 0; k < 9; k++) {
					if (k == i || k == j) continue;
					cout << height[k] << endl;
				}
				return 0;
			}
		}
	}

	return 0;//
}