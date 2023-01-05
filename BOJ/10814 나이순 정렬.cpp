//BOJ 10814
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n; cin >> n;
	
	//vector<pair<int, string>> v;
	vector<tuple<int, int, string>> tp;
	int age;
	string s;

	for (int i = 0; i < n; i++) {
		cin >> age >> s;
		//v.push_back(make_pair(age, s));
		tp.push_back(make_tuple(age, i, s));
	}

	sort(tp.begin(), tp.end()); //sort by age

	for (int i = 0; i < tp.size(); i++) {
		cout << get<0>(tp[i]) << " " << get<2>(tp[i]) << "\n";
	}



	return 0;
}