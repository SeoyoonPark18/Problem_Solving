#include <iostream>
#include <algorithm>
using namespace std;

int n; int m;
int arr[500][500];
int dp[500][500];
bool visited[500][500];

int dx[4] = { 0, 0, 1, -1 };
int dy[4] = { 1, -1, 0, 0 };

int dfs(int i, int j) {  
    if (i == n - 1 && j == m - 1) { //마지막 칸 도달
        return 1;
    }
    if (dp[i][j] != -1) {
        return dp[i][j];
    }

    dp[i][j] = 0;
    for (int k = 0; k < 4; k++) {
        int ny = i + dy[k];
        int nx = j + dx[k];
        if (ny >= 0 && nx >= 0 && ny < n && nx < m) {
            if (arr[ny][nx] < arr[i][j]) {
                dp[i][j] += dfs(ny, nx);                        
            }
        }   
    }

    return dp[i][j];
}

int main() {
    
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
            dp[i][j] = -1; //아직 방문x
        }
    }

    cout << dfs(0, 0);
    

    return 0;
}

/*

*/