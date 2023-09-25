#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<string> buf;

bool comp(string a, string b) {
	return a + b > b + a;
}

string solution(vector<int> numbers) {
	string answer = "";

	for (int i = 0; i < numbers.size(); i++) {
		string s = to_string(numbers[i]);
		buf.push_back(s);
	}
	sort(buf.begin(), buf.end(), comp); //string�� sort() ��� ����

	for (int i = 0; i < numbers.size(); i++) {
		answer += buf[i];
	}

	if (answer[0] == '0') answer = "0";
	return answer;
}