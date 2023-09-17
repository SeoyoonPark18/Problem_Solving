#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> dp[9];

int solution(int N, int number) {
	if (N == number) return 1;

	string sN = to_string(N);
	string NN = sN;

	dp[1].push_back(N);
	for (int i = 2; i < 9; i++) {
		NN += sN;
		dp[i].push_back(stoi(NN));

		for (int j = 1; j < i; j++) {
			for (int k = 0; k < dp[j].size(); k++) {
				int n1 = dp[j][k];
				for (int l = 0; l < dp[i - j].size(); l++) {
					int n2 = dp[i - j][l];

					dp[i].push_back(n1 + n2);
					if (n1 - n2 > 0) dp[i].push_back(n1 - n2);
					dp[i].push_back(n1*n2);
					if (n1 / n2 > 0) dp[i].push_back(n1 / n2);
				}
			}
		}
		sort(dp[i].begin(), dp[i].end());
		dp[i].erase(unique(dp[i].begin(), dp[i].end()), dp[i].end()); //time saving
		for (int ans : dp[i]) {
			if (ans == number) return i;
		}
	}

	return -1;
}

/*
//sort(dp[i].begin(), dp[i].end());
//dp[i].erase(unique(dp[i].begin(), dp[i].end()), dp[i].end());
dp[i][] = dp[i-1][0~size] し dp[i-2][] ...

n1 = n //1
n2 = nn, n1しn1 //1+4
n3 = nnn, n2しn1, n1しn2 //1+4+4
n4 = nnnn, n3しn1, n2しn2, n1しn3 //
n5 = nnnnn, n4しn1, n3しn2, n2しn3, n1しn4
...
*/