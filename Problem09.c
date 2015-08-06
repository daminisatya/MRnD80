/*Given a sorted array, insert a given number into the array at appropriate position*/

#include<stdio.h>
#include<stdlib.h>

void getInputSortedArray(int array[], int len){
	printf("Enter the sorted array of length %d", len - 1);
	for (int i = 0; i < len - 1; i++)
		scanf("%d", &array[i]);
	array[len] = 0;
	return;
}

void swapArrayElements(int array[], int pos, int len, int num){
	for (int i = len; i > pos; i--)
		array[i] = array[i - 1];
	array[pos] = num;
	return;
}

void insertElement(int sortedArray[], int num, int len){
	int mid = (len - 1)/ 2;
	int low = 0;
	int high = 0;
	int index = 0;
	if (num > sortedArray[mid]){
		low = mid;
		high = len - 1;
	}
	else {
		low = 0;
		high = mid - 1;
	}
	for (int i = low; i <= high; i++){
		if (num <= sortedArray[i + 1] && num >= sortedArray[i])
			index = i + 1;
	}
	swapArrayElements(sortedArray, index, len, num);
	return;
}

int main(){
	int len;
	int num;
	printf("Enter the length");
	scanf("%d", &len);
	printf("Enter the number to be inserted");
	scanf("%d", &num);
	int *sortedArray = malloc(sizeof(int) * len);
	getInputSortedArray(sortedArray, len);
	insertElement(sortedArray, num, len);
	printf("The array after inserting the element");
	for (int i = 0; i < len; i++)
		printf("%d", sortedArray[i]);
}

