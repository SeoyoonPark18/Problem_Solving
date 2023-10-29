#include <string>
#include <vector>
#include <set>
using namespace std;

set<string> s;

bool solution(vector<string> phone_book) {
	bool answer = true;
	for (string phone : phone_book) s.insert(phone);

	for (int i = 0; i < phone_book.size(); i++) {
		string phone = phone_book[i];
		string num = "";
		for (int j = 0; j < phone.length() - 1; j++) {
			num += phone[j];
			set<string>::iterator it = s.find(num);
			if (it != s.end()) return false;
		}
	}

	return answer;
}