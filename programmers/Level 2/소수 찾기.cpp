#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
using namespace std;

set<int> _set;

bool isPrime(int num) {
	if (num == 0 || num == 1) return false;
	for (int i = 2; i <= sqrt(num); i++) {
		if (num%i == 0) return false; //�Ҽ��� ����� ��� ����
	}
	return true;
}

int solution(string numbers) {
	sort(numbers.begin(), numbers.end());

	do {
		for (int i = 1; i <= numbers.length(); i++) {
			string s = numbers.substr(0, i); //�ε��� 0���� i��
			int num = stoi(s);
			if (isPrime(num)) {
				_set.insert(num);
			}
		}
	} while (next_permutation(numbers.begin(), numbers.end())); //������ ���� ���� ���ϱ�

	int answer = _set.size();
	return answer;
}