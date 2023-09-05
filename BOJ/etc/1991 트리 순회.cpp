//BOJ 1991
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct node {
	char left;
	char right;
};
struct node tree[26];

void preOrder(char root) {
	if (root == '.') return;
	cout << root;
	preOrder(tree[root].left);
	preOrder(tree[root].right);
}
void inOrder(char root) {
	if (root == '.') return;
	inOrder(tree[root].left);
	cout << root;
	inOrder(tree[root].right);
}
void postOrder(char root) {
	if (root == '.') return;
	postOrder(tree[root].left);
	postOrder(tree[root].right);
	cout << root;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int n; cin >> n;
	char a, b, c;
	for (int i = 0; i < n; i++) {
		cin >> a >> b >> c;
		tree[a].left = b;
		tree[a].right = c;
	}

	preOrder('A'); cout << '\n';
	inOrder('A');  cout << '\n';
	postOrder('A');  cout << '\n';


	return 0;
}