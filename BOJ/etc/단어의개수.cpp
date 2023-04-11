//백준 1152
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

int main() {
	string s;
	getline(cin, s); //공백 포함 입력 받기
	int cnt = 0;

	for (int i = 0; i < s.length(); i++) {
		if (s[i] == ' ')
			cnt++;
	}
	cnt = cnt + 1;

	if (s[0] == ' ')
		cnt--;

	if (s[s.length() - 1] == ' ')
		cnt--;

	cout << cnt;

	return 0;
}

/*
공백 포함 입력 받기! -> getline 함수
string은 == 사용 가능! (== 'a')
*/