//Programmers 1845
#include <vector>
#include <set>
using namespace std;

int solution(vector<int> nums)
{
	set<int> s;

	for (int i = 0; i < nums.size(); i++) {
		int ponketmon = nums[i];
		s.insert(ponketmon);
	}

	int typeCnt = s.size();
	int choiceCnt = nums.size() / 2;

	int answer = 0;
	if (choiceCnt <= typeCnt) answer = choiceCnt;
	else answer = typeCnt;

	return answer;
}