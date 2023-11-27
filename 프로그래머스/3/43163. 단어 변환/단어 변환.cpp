#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector<string> v[51];
int visited[51] = {0,};
int ans = 100;

void dfs(string cur, vector<string> words, int count, string t){
    if(count >= ans) return;
    if(cur == t){
        ans = min(ans, count);
        return;
    }
    else
    {
        for(int i=0; i<words.size();i++){
            int cnt = 0;
            for(int k=0; k<cur.length(); k++){
                if(cur[k] == words[i][k]){
                  cnt++;
                }
            }
            if(cnt == cur.length()-1 && !visited[i]){
                visited[i]++;
                dfs(words[i], words, count+1, t);
            }
        }
    }   
}

int solution(string begin, string target, vector<string> words) {
    int n = begin.length();    

    for(int i=0; i<words.size();i++){
        int cnt = 0;
        for(int k=0; k<n; k++){
            if(begin[k] == words[i][k]){
                cnt++;
            }
        }
        if(cnt == n-1){
            visited[i]++;
            dfs(words[i], words, 1, target);
            
        }
    }
 
    if(ans == 100) return 0;
    return ans;
}
