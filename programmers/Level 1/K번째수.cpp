#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
	vector<int> answer;

	for (int n = 0; n < commands.size(); n++) { //3
		int i = commands[n][0];
		int j = commands[n][1];
		int k = commands[n][2];

		vector<int> newArr;
		for (int m = i - 1; m < j; m++) {
			newArr.push_back(array[m]);
		}
		sort(newArr.begin(), newArr.end());

		answer.push_back(newArr[k - 1]);
	}


	return answer;
}