#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int solution(string name) {
	int n = name.length();
	int cnt = 0;
	int rightCnt = 0; int ar = 0;
	int leftCnt = 0; int al = 0;

	for (int i = 0; i < n; i++) {
		if (i == 0) {
			int next = name[i] - 65;
			int pre = 91 - name[i];
			cnt += min(next, pre);
		}
		else
		{
			//case 1
			if (name[i] == 'A') ar++;
			else
			{
				rightCnt++;
				rightCnt += ar;
				ar = 0;

				int next = name[i] - 65;
				int pre = 91 - name[i];
				cnt += min(next, pre);
			}

		}
		//case 2
		if (i == n - 1) continue;
		if (name[n - 1 - i] == 'A') al++;
		else
		{
			leftCnt++;
			leftCnt += al;
			al = 0;
		}
	}


	//case 3
	int cnt3 = 0;
	int l = 0; al = 0;
	int r = 0; ar = 0;
	for (int i = 1; i < n / 2 + 1; i++) {
		if (name[i] == 'A') {
			ar++;
		}
		else {
			r++;
			r += ar;
			ar = 0;
		}
		if (name[n - i] == 'A') {
			al++;
		}
		else {
			l++;
			l += al;
			al = 0;
		}
	}
	if (l < r) {
		cnt3 = l * 2 + r;
	}
	else {
		cnt3 = r * 2 + l;
	}

	int answer = min(min(leftCnt, rightCnt), cnt3) + cnt;
	return answer;
}