//25501 ¿Á±Õ¿« ±Õ¿Á
#include <string>
#include <iostream>
using namespace std;



int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	int cnt = 0;
	int isPalindrome = 1;

	for (int i = 0; i < t; i++) {
		string s;
		cin >> s;
		cnt = 0;
		int l = 0;
		int r = s.length() - 1;
		isPalindrome = true;

		for (; l <= r; l++, r--) {
			cnt++;
			if (s[l] != s[r]) {
				isPalindrome = 0;
				break;
			}
		}
		cout << isPalindrome << " " << (isPalindrome && s.length() % 2 == 0 ? cnt + 1 : cnt) << "\n";
	}
	return 0;
}