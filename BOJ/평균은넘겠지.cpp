//백준 4344
#include <iostream>
using namespace std;

int c;
int n;
float arr[1000];


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> c;
	for (int i = 0; i < c; i++) {
		float sum = 0;
		float avg = 0;
		int count = 0;

		cin >> n;
		for (int j = 0; j < n; j++) {
			cin >> arr[j];
			sum += arr[j];
		}
		avg = sum / n;
		for (int j = 0; j < n; j++) {
			if (arr[j] > avg)
				count++;
		}
		cout << fixed;
		cout.precision(3); //소수점 셋째 자리까지 출력
		cout << (double)count / n * 100 << "%\n";
	}

	return 0;
}
