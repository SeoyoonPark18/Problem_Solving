#include <iostream>
using namespace std;

long long fibo[91] = { 0,1, }; //�Ǻ���ġ ������ n�� Ŀ������ ���� �޼ӵ��� �����ϹǷ� long long ���

long long fibonacci(int number) {
	if (number == 0 || number == 1)
		return fibo[number];
	else {
		fibo[number] = fibonacci(number - 1) + fibonacci(number - 2);
		return fibo[number];
	}

}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int n; cin >> n;
	cout << fibonacci(n);

}//�ð��ʰ�