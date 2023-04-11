//17478 ����Լ��� ������?
#include <iostream>
using namespace std;

int n = 1;
int l = 0;

void line(int num) {
	for (int i = 0; i < num; i++) {
		cout << "____";
	}
}
void recursion(int num) {
	
	if (num > 0) {
		line(l);
		cout << "\"����Լ��� ������?\"\n";
		line(l);
		cout << "\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n";
		line(l);
		cout << "���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n";
		line(l);
		cout << "���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n";
		l++;

		if (num == 1) {
			line(l);
			cout << "\"����Լ��� ������?\"\n";
			line(l);
			cout << "\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n";
		}

		recursion(num - 1);
	}
	
	line(l);
	l--;
	cout << "��� �亯�Ͽ���.\n";

}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> n;
	cout << "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n";
	recursion(n);

	return 0;
}