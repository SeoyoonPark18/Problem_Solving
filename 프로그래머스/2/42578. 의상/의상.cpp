#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

map<string,int> m;

int solution(vector<vector<string>> clothes) {
    int n = clothes.size();
    int answer = 1;
    
    for(int i=0; i<n; i++){
        string _type = clothes[i][1];      
        if(m.find(_type) != m.end()){ //found
            m[_type]++;
        }else{
            m.insert({_type, 2}); //선택x 경우, 지금 추가된 옷 선택 경우
        }
    }    
    
    for(auto iter : m){
        answer *= iter.second;
    }
   
    
    return answer-1;
}