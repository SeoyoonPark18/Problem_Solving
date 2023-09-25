#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(int a, int b) {
	string s1 = to_string(a); //35
	string s2 = to_string(b); //358

	int n;
	if (s1.length() >= s2.length()) {
		n = s1.length();
	}
	else {
		n = s2.length(); //3
	}

	for (int i = 0; i < n; i++) {
		if (s1.length() == i) {
			if (s2[i] != '0') return false;
			else return true;
		}
		if (s2.length() == i) {
			if (s1[i] != '0') return true;
			else return false;
		}
		if (s1[i] == s2[i]) continue;
		if (s1[i] > s2[i]) return true;
		if (s1[i] < s2[i]) return false;
	}

	return true;
}

string solution(vector<int> numbers) {
	string answer = "";

	while (1) {
		if (numbers.size() == 0) break;

		int _max = numbers[0];
		int idx = 0;
		for (int i = 1; i < numbers.size(); i++) {
			if (!compare(_max, numbers[i])) {
				_max = numbers[i];
				idx = i;
			}
		}
		string _maxS = to_string(_max);
		answer += _maxS;

		numbers.erase(numbers.begin() + idx);
	}



	return answer;
}