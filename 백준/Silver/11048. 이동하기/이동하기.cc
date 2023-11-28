#include <iostream>
#include <algorithm>
using namespace std;

int arr[1000][1000] = { 0, };
int dp[1000][1000] = {0,};

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int a; cin >> a;
            arr[i][j] = a;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == 0) {
                if (j == 0) {
                    dp[i][j] = arr[i][j];
                }
                else {
                    dp[i][j] = arr[i][j] + dp[i][j - 1];
                }
            }
            else if (j == 0) {
                if (i == 0) continue;
                dp[i][j] = arr[i][j] + dp[i - 1][j];
            }
            else {
                int _max = max(dp[i][j - 1], dp[i - 1][j - 1]);
                _max = max(dp[i - 1][j], _max);
                dp[i][j] = arr[i][j] + _max;
            }         
        }
    }

    cout << dp[n - 1][m - 1];

    return 0;
}