/*given a number convert that to single linked list*/

#include<stdio.h>
#include<malloc.h>
#include<math.h>

struct node{
	int data;
	struct node *next;
};

int getDigit(int num){

}

void createNode(int data){
	struct node *node = (struct node*)malloc(sizeof(struct node));
	node->data = data;
	node->next = NULL;
}

int main(){
	struct node *root = NULL;
	int num = 1234;
	for (int i = 0; i < log(num) + 1; i++)
		createNode(getDigit(num));
}