#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

long long solution(int n, vector<int> times) {
	sort(times.begin(), times.end());

	long long left = 1;
	//long long right = times[times.size()-1] * n;   
	long long right = 10000000000000;
	long long answer = right;

	while (left <= right) {
		long long mid = (left + right) / 2;
		long long ppl = 0;

		for (int i = 0; i < times.size(); i++) {
			ppl += mid / times[i];
			if (ppl > n) break;
		}

		if (ppl >= n) {
			right = mid - 1;
			answer = min(answer, mid);
		}
		else {
			left = mid + 1;
		}
	}



	return answer;
}