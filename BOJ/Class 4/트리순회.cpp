#include <iostream>
using namespace std;

struct node {
	char left;
	char right;
};
struct node arr[26];

void preOrder(char root) {
	if (root == '.')
		return;
	else {
		cout << root;
		preOrder(arr[root].left);
		preOrder(arr[root].right);
	}
}//전위
void inOrder(char root) {
	if (root == '.')
		return;
	else {
		inOrder(arr[root].left);
		cout << root;
		inOrder(arr[root].right);
	}
}//중위
void postOrder(char root) {
	if (root == '.')
		return;
	else {
		postOrder(arr[root].left);
		postOrder(arr[root].right);
		cout << root;
	}
}//후위

int main() {

	int n;  cin >> n;
	char t1, t2, t3;

	for (int i = 0; i < n; i++) {
		cin >> t1 >> t2 >> t3;
		arr[t1].left = t2;
		arr[t1].right = t3;
	}

	preOrder('A'); cout << endl;
	inOrder('A'); cout << endl;
	postOrder('A'); cout << endl;

}