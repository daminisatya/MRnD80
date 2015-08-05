/*Write a function to find the length of a given string*/
#include<stdio.h>

char *getInput(char *input){
	printf("Enter the input string");
	scanf("%s", &input);
	return input;
}

int getLength(char *input){
	int len;
	for (len = 0; input[len] != '\0'; len++);
	return len;
}

int main(){
	char *input = '\0';
	int len = 0;
	input = getInput(&input);
	len = getLength(&input);
	printf("The length of the string %s is %d", &input, len);
}