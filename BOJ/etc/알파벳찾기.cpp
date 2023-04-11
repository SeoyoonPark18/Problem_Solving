//백준 10809
#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cin >> s;
	string alphabet = "abcdefghijklmnopqrstuvwxyz";
	int alp[26] = { -1, };
	for (int i = 0; i < alphabet.length(); i++) {
		alp[i] = s.find(alphabet[i]);
		cout << alp[i] << " ";
	}

	return 0;
}

/*
string STL의 find 함수는 해당 문자열이 최초로 등장하는 곳의 위치 인덱스를 반환
*/