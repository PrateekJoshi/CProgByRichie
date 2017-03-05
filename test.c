#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node* next;
};

struct node* HEAD = NULL;

void insert(int data);
void display();

int main(int argc, char **argv) {
	insert(1);
	insert(2);
	insert(3);
	insert(4);
	insert(5);

	display();
	return 0;
}

void insert(int data) {
	struct node* node = (struct node*) malloc(sizeof(struct node));
	node->data = data;
	node->next = NULL;
	if (HEAD== NULL)
		HEAD= node;
	else {
		struct node* curr = HEAD;
		while (curr->next != NULL) {
			curr = curr->next;
		}
		curr->next = node;
	}
}

void display() {
	struct node* curr = HEAD;
	while (curr != NULL) {
		printf("| %d |=> ", curr->data);
		curr = curr->next;
	}
}
