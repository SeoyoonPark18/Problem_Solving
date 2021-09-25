#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
pair<int, int> in;
vector<pair<int, int>> egg(8);

int count = 0;
bool isbreak[10];

void breakEgg() {

}

int main() {

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> egg[i].first >> egg[i].second;
	}

	breakEgg();
	cout << count;

	return 0;
}