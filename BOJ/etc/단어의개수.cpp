//���� 1152
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

int main() {
	string s;
	getline(cin, s); //���� ���� �Է� �ޱ�
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
���� ���� �Է� �ޱ�! -> getline �Լ�
string�� == ��� ����! (== 'a')
*/