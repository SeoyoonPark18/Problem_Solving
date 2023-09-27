#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int sum[501][501] = { 0, };
int _max = -1;

int solution(vector<vector<int>> triangle) {

	sum[0][0] = triangle[0][0];
	for (int i = 1; i < triangle.size(); i++) { //2층부터
		for (int j = 0; j <= i; j++) {
			//처음과 끝 예외처리
			if (j == 0) {
				sum[i][j] = sum[i - 1][j] + triangle[i][j];
			}
			else if (j == i) {
				sum[i][j] = sum[i - 1][j - 1] + triangle[i][j];
			}
			else {
				int bigger = max(sum[i - 1][j - 1], sum[i - 1][j]);
				sum[i][j] = bigger + triangle[i][j];
			}

			if (i == triangle.size() - 1) {
				_max = max(_max, sum[i][j]);
			}
		}
	}

	return _max;
}