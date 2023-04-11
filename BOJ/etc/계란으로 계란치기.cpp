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
	if (endCount <= 1) endBreak = true; //������ ���� ����� 1�� ���ϸ� ���ġ�� ����

	if (cur == n || endBreak) {
		ans = max(ans, total);
		return; //�� ���Ұų� ���ġ�� ������ breakEgg()����
	}
	else if (isBreak[cur]) {
		breakEgg(cur + 1, total); //���� ����� �����ٸ� ���� �������
	}
	else { //������ �ʾҴٸ�
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

			egg[cur].first += egg[i].second; //���󺹱�
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