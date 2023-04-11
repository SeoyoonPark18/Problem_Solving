//���� 8958
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
[���ڿ� ��]
- char �迭�� �̿��� ���ڿ��� ���, ������ �ּҸ� ����Ű�Ƿ� == ������ ��� strcmp() �̿�
- ������ string ���ڿ��� ���, == ������ ��� ����!
*/