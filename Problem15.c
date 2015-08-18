/*given a string find the ascii value sum of the characters*/

#include<stdio.h>
#include<malloc.h>

void getInputArrays(char word1[]){
	printf("Enter the string");
	scanf("%s", word1);
	return;
}

int getAsciiValue(char *str){
	int sum = 0; 
	for (int i = 0; str[i] != '\0'; i++)
		sum += str[i];
	return sum;
}

int main() {
	int len;
	printf("Enter the length of the words");
	scanf("%d", &len);
	char *word1 = malloc(sizeof(int) * len);
	getInputArrays(word1);
	printf("%d is the ASCII sum of the given string %s", getAsciiValue(word1), word1);
}