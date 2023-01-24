//BOJ 1904
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
using namespace std;

vector<string> v;

void tile(int n) {
	
	if (n == 1) {
		v.push_back("1");
		return;
	}

	if (n % 2 == 0) { //even number

		tile(n - 1);

		int len = v.size();
		for (int i = 0; i < len; i++) {
			string s = v[i];
			string one = "1";

			v[i] = one + s;
			if (find(v.begin(), v.end(), s+ one) == v.end()) {
				v.push_back(s + one);
			}	
		}
	
		string zero = "";
		for (int i = 0; i < n; i++) {
			zero += '0';
		}
		v.push_back(zero);

		
		v.erase(unique(v.begin(), v.end()), v.end());
		
	}
	else { //odd number
		tile(n - 1);

		int len = v.size();
		for (int i = 0; i < len; i++) {
			string s = v[i];
			string one = "1";

			v[i] = one + s;
			if (find(v.begin(), v.end(), s + one) == v.end()) {
				v.push_back(s + one);
			}
		}
		v.erase(unique(v.begin(), v.end()), v.end());
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n; cin >> n;
	tile(n);
	
	for (int i = 0; i < v.size(); i++) {
		cout<< v[i] << " ";
	}

	return 0;
}