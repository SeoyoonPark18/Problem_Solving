//백준 8958
#include <iostream>
#include <algorithm>
#include <string> 
using namespace std;

int n;
string case_[100];

void check(string s) {
	int sum = 0;
	int count = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s.at(i) == 'O') {
			count++;
			sum += count;
		}
		else {
			count = 0;
		}
	}
	cout << sum << "\n";
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> case_[i];
	}
	for (int i = 0; i < n; i++) {
		check(case_[i]);
	}

	return 0;
}
/*
[문자열 비교]
- char 배열을 이용한 문자열의 경우, 변수는 주소를 가리키므로 == 연산자 대신 strcmp() 이용
- 하지만 string 문자열의 경우, == 연산자 사용 가능!
*/