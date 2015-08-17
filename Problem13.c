/*Given two strings as input, find out positions where characters of both strings are same. you need to print all such positions and the characters*/

#include<stdio.h>
#include<malloc.h>

void getInputArrays(char word1[], char word2[]){
	printf("Enter the first string");
	scanf("%s", word1);
	printf("Enter the second string");
	scanf("%s", word2);
	return;
}

void getCommonCharacters(char word1[], char word2[], char loc[]){
	for (int i = 0; word1[i] != '\0'; i++){
		if (word1[i] == word2[i])
			loc[i] = word1[i];
	}
	return;
}

int main() {
	int len;
	int i;
	printf("Enter the length of the words");
	scanf("%d", &len);
	char *word1 = malloc(sizeof(int) * len);
	char *word2 = malloc(sizeof(int) * len);
	char *loc = malloc(sizeof(int) * len);
	getInputArrays(word1, word2);
	getCommonCharacters(word1, word2, loc);
	printf("The common characters and their positions");
	printf("%s", loc);
	/*for (i = 0; loc[i] = '\0'; i++){
		if ((loc[i] > 97 && loc[i] < 122) || (loc[i] > 65 && loc[i] < 90))
			printf("The character %c at %d", loc[i], i);
	} */
}