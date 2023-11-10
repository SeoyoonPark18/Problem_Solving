#include <string>
#include <vector>

using namespace std;

int check[101][101] = { 0, };

int solution(int n, vector<vector<int>> results) {
	int answer = 0;
	for (int i = 0; i < results.size(); i++) {
		int win = results[i][0];
		int lose = results[i][1];
		check[win][lose] = 1;
		check[lose][win] = -1;
	}

	//플로이드 워셜
	for (int i = 1; i <= n; i++) {
		check[i][i] = 1;
		for (int j = 1; j <= n; j++) {
			if (i == j) continue;
			for (int k = 1; k <= n; k++) {
				if (i == k) continue;
				if (check[j][i] == 1 && check[i][k] == 1) {
					check[j][k] = 1;
					check[k][j] = -1;
				}
			}
		}
	}

	for (int i = 1; i <= n; i++) {
		int zeroCnt = 0;
		for (int j = 1; j <= n; j++) {
			if (check[i][j] == 0) zeroCnt++;
		}
		if (zeroCnt == 0) answer++;
	}

	return answer;
}