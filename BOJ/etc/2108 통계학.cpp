//BOJ 2108
#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <map>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n; cin >> n;
	int num;
	vector<int> v;
	int sum = 0;
	map<int, int> m;

	for (int i = 0; i < n; i++) {
		cin >> num;
		v.push_back(num);
		m.insert({ num, 0 });
		sum += num;

		if (m[num] == 0) {
			m[num] = 1;
		}
		else {
			m[num]++;
		}
	}
	//»ê¼úÆò±Õ
	float avg = (float)sum / n;
	if (round(avg) == -0) {
		cout << 0 << endl;
	}
	else {
		cout << round(avg) << endl;
	}
	

	//Áß¾Ó°ª
	int mid;
	sort(v.begin(), v.end());
	mid = v[(n / 2)]; cout << mid << endl;
	
	//ÃÖºó°ª
	int maxNum = 0;
	int maxIndex;
	int changeCnt = 0;
	for (auto iter = m.begin(); iter != m.end(); iter++) {
		if (iter->second > maxNum) {
			maxNum = iter->second;
			maxIndex = iter->first;
			changeCnt = 0;
		}
		else if ((iter->second == maxNum) && (changeCnt == 0)) {
			maxIndex = iter->first;
			changeCnt++;
		}
	}
	cout << maxIndex << endl;

	//¹üÀ§
	int range;
	range = v.back() - v.front(); cout << range << endl;




	return 0;
}