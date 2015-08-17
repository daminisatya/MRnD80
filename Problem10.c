/*In a given sorted array, two numbers are changed their position, please fix those two numbers*/

#include<stdio.h>
#include<malloc.h>

void getSortedArray(int arr[], int len){
	printf("Enter the array elements");
	for (int i = 0; i < len; i++)
		scanf("%d", &arr[i]);
	return;
}

void swapArrayElements(int arr[], int pos1, int pos2){
	arr[pos1] = arr[pos1] + arr[pos2];
	arr[pos2] = arr[pos1] - arr[pos2];
	arr[pos1] = arr[pos1] - arr[pos2];
	return;
}

void getCorrectedSortedArray(int arr[], int len){
	int pos1 = 0;
	int pos2 = 0;
	int i;
	for (i = 0; i < len; i++){
		if (!(arr[i] >= arr[i - 1] && arr[i] <= arr[i + 1])){
			pos1 = i;
			break;
		}
	}
	for (i = pos1 + 1; i < len; i++){
		if (!(arr[i] >= arr[i - 1] && arr[i] <= arr[i + 1])){
			pos2 = i;
			break;
		}
	}
	swapArrayElements(arr, pos1, pos2);
	return;
}

int main() {
	int len;
	printf("Enter the length of the array");
	scanf("%d", &len);
	int *sortedArray = malloc(sizeof(int) * len);
	getSortedArray(sortedArray, len);
	getCorrectedSortedArray(sortedArray, len);
	printf("The array after correction is:");
	for (int i = 0; i < len; i++)
		printf("%d", sortedArray[i]);
}