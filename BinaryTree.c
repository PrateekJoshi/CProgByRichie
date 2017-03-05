#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node* left;
	struct node* right;
};
//Initialize root to represent a tree
struct node* ROOT_PTR = NULL;
void printLevelOrder();
void printGivenLevel(struct node*, int);
int height(struct node*);

int main(int argc, char **argv) {

	//add elements to the tree
	struct node* root = (struct node*) malloc(sizeof(struct node));
	root->data = 7;
	root->left = NULL;
	root->right = NULL;
	struct node* node1 = (struct node*) malloc(sizeof(struct node));
	node1->data = 5;
	node1->left = NULL;
	node1->right = NULL;
	struct node* node2 = (struct node*) malloc(sizeof(struct node));
	node2->data = 10;
	node2->left = NULL;
	node2->right = NULL;
	struct node* node3 = (struct node*) malloc(sizeof(struct node));
	node3->data = 3;
	node3->left = NULL;
	node3->right = NULL;
	struct node* node4 = (struct node*) malloc(sizeof(struct node));
	node4->data = 6;
	node4->left = NULL;
	node4->right = NULL;
	struct node* node5 = (struct node*) malloc(sizeof(struct node));
	node5->data = 8;
	node5->left = NULL;
	node5->right = NULL;
	struct node* node6 = (struct node*) malloc(sizeof(struct node));
	node6->data = 15;
	node6->left = NULL;
	node6->right = NULL;
	//assign left and right pointers
	ROOT_PTR = root;
	root->left = node1;
	root->right = node2;
	root->left->left = node3;
	root->left->right = node4;
	root->right->left = node5;
	root->right->right = node6;

	//display the tree in level order
	printf("Level Order Traversal:\n");
	printLevelOrder();
	return 0;
}

void printLevelOrder() {
	int h = height(ROOT_PTR);
	for (int i = 1; i <= h; i++) {
		printGivenLevel(ROOT_PTR, i);
	}
}

void printGivenLevel(struct node* root, int level) {
	if (root == NULL)
		return;
	if (level == 1)
		printf("%d ", root->data);
	else if (level > 1) {
		printGivenLevel(root->left, level - 1);
		printGivenLevel(root->right, level - 1);
	}
}

int height(struct node* node) {
	if (node == NULL)
		return 0;
	else {
		int leftHeight = height(node->left);
		int rightHeight = height(node->right);
		//use the larger one
		if (leftHeight > rightHeight)
			return leftHeight + 1;
		else
			return rightHeight + 1;
	}
}
