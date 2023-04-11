//BOJ 1620
#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n, m;
	cin >> n >> m;
	map<string, int> map;
	vector<string> name;
	string s;
	for (int i = 0; i < n; i++) {
		cin >> s;
		map[s] = i + 1;
		name.push_back(s);
	}

	string question;
	int num;

	for (int i = 0; i < m; i++) {
		cin >> question;

		if (isdigit(question[0]) == true) { //check if first index of question string is digit or not
			num = stoi(question);
			cout << name[num - 1] << "\n";
		}
		else {
			auto it = map.find(question);
			cout << it->second << "\n";
		}

	}
	

	return 0;
}