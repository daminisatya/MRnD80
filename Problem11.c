/*Given an unsorted array and a number, find out how many elements are bigger than the number and how many are less than that number*/

#include<stdio.h>
#include<malloc.h>

void getInputArray(int arr[], int len){
	printf("Enter the array elements");
	for (int i = 0; i < len; i++)
		scanf("%d", &arr[i]);
	return;
}

void eleminateDuplicates(int arr[], int len){
}

int getLargestElements(int arr[], int num, int len){
	int count = 0;
	for (int i = 0; i < len; i++){
		if (arr[i] > num)
			count++;
	}
	return count;
}

int getSmallestElements(int arr[], int num, int len){
	int count = 0;
	for (int i = 0; i < len; i++){
		if (arr[i] < num)
			count++;
	}
	return count;
}

int main(){
	int len;
	int num;
	int largestCount = 0;
	int smallestCount = 0;
	printf("Enter the length of the array");
	scanf("%d", &len);
	int *inputArray = malloc(sizeof(int) * len);
	getInputArray(inputArray, len);
	printf("Enter the number");
	scanf("%d", &num);
	//eleminateDuplicates(inputArray, len);
	largestCount = getLargestElements(inputArray, num, len);
	smallestCount = getSmallestElements(inputArray, num, len);
	printf("The number of elements greater than %d is %d \n", num, largestCount);
	printf("The number of elements smaller than %d is %d", num, smallestCount);
}