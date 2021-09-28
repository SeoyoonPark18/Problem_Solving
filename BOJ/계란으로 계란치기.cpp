#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
vector<pair<int, int>> egg(10);

int ans = 0;
bool isBreak[10];

void breakEgg(int cur, int total) {

	bool endBreak = false;
	int endCount = 0;

	for (int i = 0; i < n; i++) {
		if (!isBreak[i]) endCount++;
	}
	if (endCount <= 1) endBreak = true; //깨지지 않은 계란이 1개 이하면 계란치기 종료

	if (cur == n || endBreak) {
		ans = max(ans, total);
		return; //다 돌았거나 계란치기 종료라면 breakEgg()종료
	}
	else if (isBreak[cur]) {
		breakEgg(cur + 1, total); //현재 계란이 깨졌다면 다음 계란으로
	}
	else { //깨지지 않았다면
		for (int i = 0; i < n; i++) {
			if (cur == i || isBreak[i]) continue;

			egg[cur].first -= egg[i].second;
			egg[i].first -= egg[cur].second;

			int t = 0;
			if (egg[cur].first <= 0) {
				isBreak[cur] = true;
				t++;
			}
			if (egg[i].first <= 0) {
				isBreak[i] = true;
				t++;
			}

			breakEgg(cur + 1, total + t);

			egg[cur].first += egg[i].second; //원상복구
			egg[i].first += egg[cur].second;
			isBreak[cur] = false;
			isBreak[i] = false;
		}
	}

}

int main() {

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> egg[i].first >> egg[i].second;
	}

	breakEgg(0, 0);
	cout << ans;

	return 0;
}