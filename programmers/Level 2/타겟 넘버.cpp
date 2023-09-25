#include <string>
#include <vector>
#include <queue>

#include <iostream>
using namespace std;

queue<int> q;

int solution(vector<int> numbers, int target) {
	int answer = 0;

	int first = numbers[0];
	q.push(first);
	q.push(-first);

	for (int i = 1; i < numbers.size(); i++) {
		int cur = numbers[i];
		int leng = q.size();

		for (int j = 0; j < leng; j++) {
			int prev = q.front();
			q.pop();
			q.push(prev + cur);
			q.push(prev - cur);
		}
	}

	while (!q.empty()) {
		int sum = q.front();
		q.pop();
		if (sum == target) {
			answer++;
		}
	}

	return answer;
}