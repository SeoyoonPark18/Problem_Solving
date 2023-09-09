//programmers 12906
#include <vector>
#include <iostream>
#include <stack>

using namespace std;

vector<int> solution(vector<int> arr)
{
	stack<int> _stack;
	vector<int> answer;

	for (int i = 0; i < arr.size(); i++) {
		int cur = arr[i];
		if (_stack.empty()) {
			_stack.push(cur);
			answer.push_back(cur);
		}
		else if (_stack.top() != cur) {
			_stack.push(cur);
			answer.push_back(cur);
		}
	}

	return answer;
}