//���� 2941
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
string::npos�� -1�� ���� ������ ���
find() �Լ��� ���ؼ� �߰ߵ��� ���ϴ� ��� npos ���� ����
replace() �Լ��� (������, ��ǹ��ڸ�, ~�δ�ü)
*/