//BOJ 1874
#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	stack<int> stack;
	vector<int> v;
	vector<int> sorted;
	vector<string> ans;
	bool isnot = false;

	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		int num; cin >> num;
		v.push_back(num);
		sorted.push_back(num);
	}
	sort(sorted.begin(), sorted.end());

	int idx = 0;
	for (int j = 0; j < n; j++) {
		if (v[0] != sorted[j]) {
			stack.push(sorted[j]);
			ans.push_back("+");
		}
		else {
			ans.push_back("+");
			ans.push_back("-");
			idx = j+1;
			break;
		}
	}


	for (int i = 1; i < n; i++) {
		if (idx >= n) {
			if (stack.top() == v[i]) {
				stack.pop();
				ans.push_back("-");
			}
			else {
				isnot = true;
				break;
			}
		}
		for (int j = idx; j < n; j++) {		
			if (sorted[j] > v[i] && stack.top() == v[i]) {
				stack.pop();				
				ans.push_back("-");
				break;
			}
			else if (v[i] < sorted[j] && stack.top() != v[i]) {
				isnot = true;
				break;
			}
			else if (v[i] > sorted[j]) {
				stack.push(sorted[j]);
				ans.push_back("+");
			}
			else if (v[i] == sorted[j]) {
				ans.push_back("+");
				ans.push_back("-");
				idx = j + 1;
				break;
			}
		}
	}

	if (isnot == true) {
		cout << "NO";
	}
	else {
		for (int i = 0; i < ans.size(); i++) {
			cout << ans[i] << '\n';
		}
	}
	


	return 0;
}