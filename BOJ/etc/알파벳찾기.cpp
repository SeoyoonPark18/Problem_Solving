//���� 10809
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
string STL�� find �Լ��� �ش� ���ڿ��� ���ʷ� �����ϴ� ���� ��ġ �ε����� ��ȯ
*/