/*Given an unsorted array, find out two numbers whose sum is minimal among all 2-tuples in the array*/

#include<stdio.h>
#include<malloc.h>

void getInputArray(int arr[], int len){
	printf("Enter the array elements");
	for (int i = 0; i < len; i++)
		scanf("%d", &arr[i]);
	return;
}

void getMinSumTuples(int arr[], int len, int tuple[]){
	tuple[0] = arr[0];
	tuple[1] = arr[1];
	if (tuple[1] < tuple[0]){
		tuple[1] = tuple[1] + tuple[0];
		tuple[0] = tuple[1] - tuple[0];
		tuple[1] = tuple[1] - tuple[0];
	}
	for (int i = 2; i < len; i++){
		if (arr[i] < tuple[0]){
			tuple[1] = tuple[0];
			tuple[0] = arr[i];
		}
		else if (arr[i] < tuple[1])
			tuple[1] = arr[i];
	}
	return;
}

int main(){
	int len;
	int tuple[2] = { 0, 0 };
	printf("Enter the length of the array");
	scanf("%d", &len);
	int *inputArray = malloc(sizeof(int) * len);
	getInputArray(inputArray, len);
	getMinSumTuples(inputArray, len, tuple);
	printf("The minimum tuple among the array is %d and %d", tuple[0], tuple[1]);
}