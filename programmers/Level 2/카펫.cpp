#include <string>
#include <vector>
#include <cmath>
using namespace std;

vector<int> solution(int brown, int yellow) {
	vector<int> answer;

	for (int i = 1; i <= yellow / i; i++) {
		int a = yellow / i;
		int b = i;
		if (yellow%i != 0) continue;
		if (brown == (a + 2)*(b + 2) - a * b) {
			answer.push_back(a + 2);
			answer.push_back(b + 2);
			break;
		}
	}

	return answer;
}