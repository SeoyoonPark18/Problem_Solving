#include <string>
#include <vector>
using namespace std;

vector<int> dp[9];

int solution(int N, int number) {
	int answer = 1;
	string sN = to_string(N); //"5"
	string NN = sN;

	dp[1].push_back(N);
	for (int i = 2; i < 9; i++) {
		NN += sN;
		int iN = stoi(NN);
		dp[i].push_back(iN);

		int idx = 1;
		for (int j = 1; j < i; j++) {
			for (int k = 0; k < dp[j].size(); k++) {
				int n1 = dp[j][k];
				for (int l = 0; l < dp[i - j].size(); l++) {
					int n2 = dp[i - j][l];

					int value = n1 + n2;
					if (value == number) return value;
					dp[i].push_back(value);
					value = n1 - n2;
					if (value == number) return value;
					dp[i].push_back(value);
					value = n1 * n2;
					if (value == number) return value;
					dp[i].push_back(value);
					value = n1 / n2;
					if (value == number) return value;
					dp[i].push_back(value);


				}
			}
		}
	}

	return answer;
}

/*
dp[i][] = dp[i-1][0~size] し dp[i-2][] ...

n1 = n //1
n2 = nn, n1しn1 //1+4
n3 = nnn, n2しn1, n1しn2 //1+4+4
n4 = nnnn, n3しn1, n2しn2, n1しn3 //
n5 = nnnnn, n4しn1, n3しn2, n2しn3, n1しn4
...
*/