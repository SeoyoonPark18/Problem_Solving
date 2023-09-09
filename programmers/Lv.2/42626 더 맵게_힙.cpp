//programmers 42626
#include <string>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int solution(vector<int> scoville, int K) {
	int answer = 0;

	priority_queue<int, vector<int>, greater<int>> minHeap;

	for (int i = 0; i < scoville.size(); i++) {
		int value = scoville[i];
		minHeap.push(value);
	}

	while (true) {
		if (minHeap.top() >= K) break;
		else if (minHeap.size() == 1) return -1;

		int first = minHeap.top();
		minHeap.pop();
		int second = minHeap.top();
		minHeap.pop();

		int newValue = first + second * 2;
		minHeap.push(newValue);

		answer++;
	}



	return answer;
}