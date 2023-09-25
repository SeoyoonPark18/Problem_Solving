#include <string>
#include <stack>
#include <iostream>

using namespace std;

bool solution(string s)
{
	stack<char> _stack;
	char c;
	bool answer = true;

	for (int i = 0; i < s.length(); i++) {
		if (s[0] == ')') return false;

		if (s[i] == '(') _stack.push(s[i]);
		else if (s[i] == ')') {
			if (_stack.empty()) {
				return false;
			}
			else {
				_stack.pop();
			}
		}
	}

	if (!_stack.empty()) return false;


	return answer;
}