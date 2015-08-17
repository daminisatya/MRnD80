/*Given a number convert that to single linked list*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct node{
	int data;
	struct node *next;
};

void displayList(struct node* head){
	while (head != NULL){
		printf("%d", head->data);
		head = head->next;
	}
}

int main(){
	int num = 0;
	printf("Enter the number");
	scanf("%d", &num);
	int rem = 0;
	int list = 0;
	while (num < 0){
		rem = num % 10;
		struct node* list = NULL;
		list = (struct node*)malloc(sizeof(struct node));
		list->data = rem;
		list->next = list++;
		num = num / 10;
	}
	void displayList(list);
}