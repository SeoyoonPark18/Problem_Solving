//BOJ 5639
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct Node {
	int data;
	Node* left;
	Node* right;
};

Node* insertNode(Node* node, int data) {
	if (node == NULL){
		node = new Node();
		node->data = data;
		node->left = node->right = NULL;
	}
	else if (data <= node->data) {
		node->left = insertNode(node->left, data);
	}
	else {
		node->right = insertNode(node->right, data);
	}

	return node;
}

void postOrder(Node* node) {
	if (node->left != NULL) {
		postOrder(node->left);
	}
	if (node->right != NULL) {
		postOrder(node->right);
	}
	cout << node->data << '\n';
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int input;
	Node* root = NULL;
	while (cin>>input) {
		root = insertNode(root, input);
	}

	postOrder(root);



	return 0;
}