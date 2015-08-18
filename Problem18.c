/*Median of sorted arrays*/

#include<stdio.h>
#include<malloc.h>

void getSortedArray(int arr[], int arr2[], int len){
	printf("Enter the first array elements");
	for (int i = 0; i < len; i++)
		scanf("%d", &arr[i]);
	printf("Enter the second array elements");
	for (int i = 0; i < len; i++)
		scanf("%d", &arr2[i]);
	return;
}

int max(int x, int y){
	return x > y ? x : y;
}

int min(int x, int y){
	return x > y ? y : x;
}

int median(int arr[], int n)
{
	if (n % 2 == 0)
		return (arr[n / 2] + arr[n / 2 - 1]) / 2;
	else
		return arr[n / 2];
}

int getMedian(int ar1[], int ar2[], int n)
{
	int m1; /* For median of ar1 */
	int m2; /* For median of ar2 */
	if (n <= 0)
		return -1;
	if (n == 1)
		return (ar1[0] + ar2[0]) / 2;
	if (n == 2)
		return (max(ar1[0], ar2[0]) + min(ar1[1], ar2[1])) / 2;
	m1 = median(ar1, n); /* get the median of the first array */
	m2 = median(ar2, n); /* get the median of the second array */
	/* If medians are equal then return either m1 or m2 */
	if (m1 == m2)
		return m1;
	/* if m1 < m2 then median must exist in ar1[m1....] and ar2[....m2] */
	if (m1 < m2)
	{
		if (n % 2 == 0)
			return getMedian(ar1 + n / 2 - 1, ar2, n - n / 2 + 1);
		else
			return getMedian(ar1 + n / 2, ar2, n - n / 2);
	}
	/* if m1 > m2 then median must exist in ar1[....m1] and ar2[m2...] */
	else
	{
		if (n % 2 == 0)
			return getMedian(ar2 + n / 2 - 1, ar1, n - n / 2 + 1);
		else
			return getMedian(ar2 + n / 2, ar1, n - n / 2);
	}
}

int main() {
	int len;
	printf("Enter the length of the array");
	scanf("%d", &len);
	int *sortedArray1 = malloc(sizeof(int) * len);
	int *sortedArray2 = malloc(sizeof(int) * len);
	getSortedArray(sortedArray1, sortedArray2, len);
	printf("\n\n%d",getMedian(sortedArray1, sortedArray2, len));
}