//BOJ 14888
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n;
int list[11];
int opt[10];
int optCnt = 0;
int caseList[10];
bool used[10];
int minNum = 10000;
int maxNum = -10000;

void backTracking(int cnt) {
	optCnt = n - 1;
	int cal = list[0];

	if (cnt == optCnt) { //1 1 2 3 4
		for (int i = 0; i < optCnt; i++) {
			switch (caseList[i]) {
			case 1:
				cal += list[i + 1];
				break;
			case 2:
				cal -= list[i + 1];
				break;
			case 3:
				cal *= list[i + 1];
				break;
			case 4:
				cal /= list[i + 1];
				break;
			}
		}

		if (cal > maxNum) {
			maxNum = cal;
		}
		if (cal < minNum) {
			minNum = cal;
		}

		return;
	}

	for (int i = 0; i < optCnt; i++) {
		if (!used[i]) {
			used[i] = true;
			caseList[i] = opt[i];
			backTracking(cnt + 1);
			caseList[i] = 0;
			used[i] = false;
		}
	}	
	
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> list[i];
	}

	int m; int cnt = 0;
	cin >> m; // '+'
	for (int i = 0; i < m; i++) {
		opt[cnt++] = 1;
	}
	cin >> m; // '-'
	for (int i = 0; i < m; i++) {
		opt[cnt++] = 2;
	}
	cin >> m; // '*'
	for (int i = 0; i < m; i++) {
		opt[cnt++] = 3;
	}
	cin >> m; // '/'
	for (int i = 0; i < m; i++) {
		opt[cnt++] = 4;
	}
	
	
	backTracking(0); 

	cout << maxNum << "\n" << minNum;
	

	return 0;
}