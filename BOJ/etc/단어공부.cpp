//백준 1157
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string s; cin >> s;
	string alphabet = "abcdefghijklmnopqrstuvwxyz";
	string Alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int cnt[26] = { 0, };

	for (int i = 0; i < alphabet.length(); i++) {
		for (int j = 0; j < s.length(); j++) {
			if (s[j] == alphabet[i]) {
				cnt[i]++;
			}
		}
	}
	for (int i = 0; i < Alphabet.length(); i++) {
		for (int j = 0; j < s.length(); j++) {
			if (s[j] == Alphabet[i]) {
				cnt[i]++;
			}
		}

	}
	int max = 0;
	int max_index = 0;
	for (int i = 0; i < Alphabet.length(); i++) {
		if (cnt[i] > max) {
			max = cnt[i];
			max_index = i;
		}
	}
	int index_cnt = 0;
	for (int i = 0; i < Alphabet.length(); i++) {
		if (cnt[i] == max) {
			index_cnt++;
		}
	}
	if (index_cnt > 1)
		cout << "?";
	else cout << (char)(max_index + 65);

	return 0;
}

/*
아스키코드 활용! 숫자는 0~, 대문자는 65~, 소문자는 97~
*/