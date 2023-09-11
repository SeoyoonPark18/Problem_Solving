#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> sizes) {

	int w = sizes[0][0];
	int h = sizes[0][1];
	int wTemp1, hTemp1, wTemp2, hTemp2;
	int answer = w * h;

	for (int i = 1; i < sizes.size(); i++) {

		wTemp1 = max(w, sizes[i][0]);
		hTemp1 = max(h, sizes[i][1]);

		wTemp2 = max(w, sizes[i][1]);
		hTemp2 = max(h, sizes[i][0]);

		int a = wTemp1 * hTemp1;
		int b = wTemp2 * hTemp2;
		if (a > b) {
			w = wTemp2; h = hTemp2;
			answer = b;
		}
		else {
			w = wTemp1; h = hTemp1;
			answer = a;
		}
	}


	return answer;
}