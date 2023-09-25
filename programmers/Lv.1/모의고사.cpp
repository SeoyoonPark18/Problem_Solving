#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> answers) {

	int p1[10] = { 1,2,3,4,5 }; //5
	int p2[10] = { 2,1,2,3,2,4,2,5 }; //8
	int p3[10] = { 3,3,1,1,2,2,4,4,5,5 }; //10
	int cnt[4] = { 0, };
	int _max = 0;

	for (int i = 0; i < answers.size(); i++) {
		if (p1[i % 5] == answers[i]) cnt[1]++;
		if (p2[i % 8] == answers[i]) cnt[2]++;
		if (p3[i % 10] == answers[i]) cnt[3]++;


	}
	_max = max({ cnt[1], cnt[2], cnt[3] });

	vector<int> answer;
	for (int i = 1; i <= 3; i++) {
		if (cnt[i] == _max) answer.push_back(i);
	}

	return answer;
}