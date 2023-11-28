#include <iostream>
#include <algorithm>
using namespace std;

int n;
int arr[100][100];
long long dp[100][100] = { 0, };

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int num; cin >> num;
            arr[i][j] = num;
        }
    }

    dp[0][0] = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (dp[i][j] == 0) continue;
            if (i == n - 1 && j == n - 1) continue;
            else {
                int num = arr[i][j];
                if (i + num < n) dp[i + num][j] += dp[i][j];
                if (j + num < n) dp[i][j + num] += dp[i][j];
            }
        }
    }

    cout << dp[n - 1][n - 1];

    return 0;
}

/*
dfs 사용시 시간초과
*/