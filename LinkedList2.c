#include <stdio.h>
#include <stdlib.h>

//Using double pointer
struct node {
	int data;
	struct node* next;
};

void insertNode(struct node**,int);
void displayList(struct node**);
void deleteNode(struct node**,int);
int searchNode(struct node**,int);

int main(int argc, char **argv) {
	struct node* head = NULL;  //pointer to linked list
	//insert node
	insertNode(&head, 1);
	insertNode(&head, 2);
	insertNode(&head, 3);
	insertNode(&head, 4);
    //display node
	displayList(&head);
	printf("\n");
	//delete node
	deleteNode(&head,3);
	printf("\n");
	displayList(&head);
	//search in the list
	printf("\n Search element 4\n");
	int found=searchNode(&head,4);
	found==1?printf("Found"):printf("Not found");
	return 0;
}

void insertNode(struct node** head,int data){
	struct node* node=(struct node*)malloc(sizeof(struct node));
	node->data=data;
	node->next=NULL;
	if(*head==NULL){
		*head=node;
	}else{
		struct node* curr=*head;
		while(curr->next!=NULL){
			curr=curr->next;
		}
		curr->next=node;
	}
}

void deleteNode(struct node** head,int data){
	if(*head==NULL){
		printf("Empty list\n");
	}
	else{
		struct node* curr=*head;
		struct node * prev=NULL;
		while(curr->data!=data){
			prev=curr;
			curr=curr->next;
		}
		struct node* delete=curr;
		printf("Deleted node %d\n",delete->data);
		prev->next=curr->next;
		free(delete);
		delete=NULL;
	}
}

void displayList(struct node** head){
	printf("List:\n");
	struct node* curr=*head;
	while(curr!=NULL){
		printf("| %d | => ",curr->data);
		curr=curr->next;
	}
}

int searchNode(struct node** head,int key){
	if(*head==NULL){
	   return 0;
	}
	struct node* curr=*head;
	while(curr!=NULL){
		if(curr->data==key)
			return 1;
		curr=curr->next;
	}
	return 0;
}

