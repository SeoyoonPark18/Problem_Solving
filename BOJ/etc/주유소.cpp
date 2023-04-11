#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	long cityNum; cin >> cityNum;
	long city[100000];
	long distance[100000];
	long price = 1000000000;
	long sum = 0;

	for (int i = 0; i < cityNum - 1; i++) {
		cin >> distance[i];
	}
	for (int i = 0; i < cityNum; i++) {
		cin >> city[i];
	}

	for (int j = 0; j < cityNum - 1; j++) {
		if (city[j] < price)
			price = city[j];
		sum += price * distance[j];

	}
	cout << sum;

	return 0;
}