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
		if (num%i == 0) return false; //소수의 배수를 모두 지움
	}
	return true;
}

int solution(string numbers) {
	sort(numbers.begin(), numbers.end());

	do {
		for (int i = 1; i <= numbers.length(); i++) {
			string s = numbers.substr(0, i); //인덱스 0부터 i개
			int num = stoi(s);
			if (isPrime(num)) {
				_set.insert(num);
			}
		}
	} while (next_permutation(numbers.begin(), numbers.end())); //가능한 순열 조합 구하기

	int answer = _set.size();
	return answer;
}