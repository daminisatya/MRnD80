/*Given two strings find out all common characters of the string.*/

#include<stdio.h>
#include<malloc.h>

void getInputArrays(char word1[], char word2[]){
	printf("Enter the string");
	scanf("%s", word1);
	printf("Enter the string");
	scanf("%s", word2);
	return;
}

void getCommonCharacters(char word1[],char word2[], int alpha[]){
	for (int i = 0; word1[i] != '\0'; i++)
		for (int j = 0; word2[j] != '\0'; j++){
			if (word1[i] == word2[j]){
				alpha[word1[i] - 97] = 1;
				break;
			}
		}
	return;
}

int main() {
	int len1;
	int len2;
	int alpha[26];
	printf("Enter the length of the words");
	scanf("%d", &len1);
	printf("Enter the length of the second words");
	scanf("%d", &len2);
	char *word1 = malloc(sizeof(int) * len1);
	char *word2 = malloc(sizeof(int) * len2);
	getInputArrays(word1, word2);
	getCommonCharacters(word1, word2, alpha);
	for (int i = 0; i < 26; i++){
		if (alpha[i] == 1)
			printf("%c", (97 + i));
	}
}