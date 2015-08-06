/*Write a function which takes an array as input and finds out the two largest values of the array*/

#include<stdio.h>
#include<stdlib.h>

void getInputArray(int num[], int len){
	printf("Enter the array elements");
	for (int i = 0; i < len; i++)
		scanf("%d", &num[i]);
}

void getMaxTwoIntegers(int number[], int len, int maxList[]){
	maxList[0] = number[0];
	maxList[1] = number[1];
	if (maxList[1] > maxList[0]){
		maxList[0] = maxList[1];
		maxList[1] = number[0];
	}
	for (int i = 2; i < len; i++){
		if (number[i] > maxList[0]){
			maxList[1] = maxList[0];
			maxList[0] = number[i];
		}
		else if (number[i] > maxList[1]){
			maxList[1] = number[i];
		}
	}
	return;
}

int main(){
	int len = 0;
	int maxList[2] = { 0 };
	printf("Enter the length of the array");
	scanf("%d", &len);
	int *number = malloc(sizeof(int) * len);
	getInputArray(number, len);
	getMaxTwoIntegers(number, len, maxList);
	printf("The first largest number in the array is %d\n", maxList[0]);
	printf("The second largest number in the array is %d\n", maxList[1]);
}