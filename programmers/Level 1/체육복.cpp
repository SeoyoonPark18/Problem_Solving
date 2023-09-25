#include <string>
#include <vector>

using namespace std;

int arr[31] = { 0, };

int solution(int n, vector<int> lost, vector<int> reserve) {

	for (int i = 0; i < lost.size(); i++) {
		int value = lost[i];
		arr[value]--; //-1
	}
	for (int i = 0; i < reserve.size(); i++) {
		int value = reserve[i];
		arr[value]++; //1
	}

	for (int i = 1; i <= n; i++) {
		if (arr[i] == -1) {
			if (arr[i - 1] == 1) {
				arr[i]++; arr[i - 1]--;
				continue;
			}
			if (arr[i + 1] == 1) {
				arr[i]++; arr[i + 1]--;
			}
		}
	}

	int answer = n;
	for (int i = 1; i <= n; i++) {
		if (arr[i] == -1) answer--;
	}

	return answer;
}