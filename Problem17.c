/*Find the count of numbers greater than a given number in a sorted array.*/

#include<stdio.h>
#include<malloc.h>

void getSortedArray(int arr[], int len){
	printf("Enter the array elements");
	for (int i = 0; i < len; i++)
		scanf("%d", &arr[i]);
	return;
}

int getMaxCount(int arr[],int len, int num){
	int low = 0;
	int high = 0;
	int count = 0;
	int mid = (low + high) / 2;
	if (arr[mid] == num)
		return high - mid - 1;
	else if (arr[mid] < num){
		low = mid + 1;
		high = len;
	}
	else if (arr[mid] > num){
		low = 0;
		high = len;
	}
	for (int i = low; i < high; i++){
		if (arr[i] > num)
			count++;
	}
	return count;
}

int main() {
	int len;
	int num;
	printf("Enter the length of the array");
	scanf("%d", &len);
	printf("Enter the number");
	scanf("%d", &num);
	int *sortedArray = malloc(sizeof(int) * len);
	getSortedArray(sortedArray, len);
	printf("\nThe max count %d", getMaxCount(sortedArray, len, num));
}