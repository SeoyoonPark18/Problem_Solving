//BOJ 10844
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	vector<int> v;
	int n; cin >> n;

	for (int i = 0; i < 9; i++) {
		v.push_back(i + 1);
	}

	
	for (int j = 1; j < n; j++) {
		//int idx = 1;
		for (int i = 0; i < v.size(); i++) {
			bool push = true;
			if ((v[i] - 1) >= 0) {
				v[i] = v[i] - 1;	
			}
			else {
				v[i] = v[i] + 1;
				push = false;
			}
			if ((v[i] + 1) < 10 && push == true) {
				v.push_back(v[i] + 1);
			}
			//idx++;
		}		
	}

	cout << v.size();

	return 0;
}