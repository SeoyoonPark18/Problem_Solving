//백준 2941
#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cin >> s;
	string arr[8] = { "c=", "c-", "dz=", "d-","lj", "nj", "s=", "z=" };
	for (int i = 0; i < 8; i++) {
		while (true) {
			if (s.find(arr[i]) != string::npos) {
				s.replace(s.find(arr[i]), arr[i].length(), "a");
			}
			else if (s.find(arr[i]) == string::npos)
				break;
		}
	}
	cout << s.length();

	return 0;
}

/*
string::npos는 -1의 값을 가지는 상수
find() 함수에 의해서 발견되지 못하는 경우 npos 값을 리턴
replace() 함수는 (어디부터, 몇개의문자를, ~로대체)
*/