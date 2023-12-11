#include <string>
#include <vector>
#include <iostream>
using namespace std;

int dp[101][101] = {0,};

int solution(int m, int n, vector<vector<int>> puddles) {
    
    for(int i=0; i<puddles.size(); i++){
        int a = puddles[i][1];
        int b = puddles[i][0];
        dp[a][b] = -1;
    }
    
    dp[1][1] = 1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            int a=0; int b=0;
            if(i==1 && j==1) continue;
            if(dp[i][j] == -1) continue;
            if(dp[i][j-1] != -1){
                a = dp[i][j-1];
            } 
            if(dp[i-1][j] != -1){
                b = dp[i-1][j];
            } 
            dp[i][j] = (a+b) % 1000000007;
            //cout<<dp[i][j]<<" ";
        }
    }
    
    return dp[n][m];
}