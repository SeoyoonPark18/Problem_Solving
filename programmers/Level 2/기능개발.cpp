#include <string>
#include <vector>
#include <queue>
using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
	queue<int> q;
	vector<int> answer;

	int days;
	for (int i = 0; i < progresses.size(); i++) {
		if ((100 - progresses[i]) % speeds[i]) { //나머지가 있다면
			days = (100 - progresses[i]) / speeds[i] + 1;
			q.push(days);
		}
		else {
			days = (100 - progresses[i]) / speeds[i];
			q.push(days);
		}
	}

	int a = q.front();
	int cnt = 1;
	q.pop();
	while (!q.empty()) {
		int b = q.front();
		q.pop();
		if (a >= b) {
			cnt++;
		}
		else {
			answer.push_back(cnt);
			a = b;
			cnt = 1;
		}
	}
	answer.push_back(cnt);



	return answer;
}