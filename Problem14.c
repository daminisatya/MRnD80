/*given a string find out which character appears more in that string*/

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#define CHAR_SIZE 256

void getInputArrays(char word1[]){
	printf("Enter the string");
	scanf("%s", word1);
	return;
}

int getMaxIndexCount(int alpha[]){
	int i;
	int maxCount = 0;
	for (i = 0; i < CHAR_SIZE; i++)
		if (alpha[i] > alpha[maxCount])
			maxCount = i;
	return maxCount;
}

char getHighestFrequency(char str[]){
	int index = 0;
	int *alpha = (int *)calloc(CHAR_SIZE, sizeof(int));
	for (int i = 0; *(str + i); i++)
		alpha[*(str + i)]++;
	return getMaxIndexCount(alpha);
}

int main() {
	int len;
	printf("Enter the length of the words");
	scanf("%d", &len);
	char *word1 = malloc(sizeof(int) * len);
	getInputArrays(word1);
	printf("%c",getHighestFrequency(word1));
}