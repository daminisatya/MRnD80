/*Write a function to generate the Nth fibonacci number*/

#include<stdio.h>

int getNFiboNumber(int pos){
	int count = 2;
	int num1 = 1; 
	int num2 = 1;
	int sum = 0;
	if (pos < 2)
		return 1;
	while (count != pos){
		sum = num1 + num2;
		num2 = num1;
		num1 = sum;
		count++;
	}
	return num1;
}

int main(){
	int pos;
	int number = 0;
	printf("Enter the Nth position for the Nth fibonacci number");
	scanf("%d", &pos);
	number = getNFiboNumber(pos);
	printf("The Nth fibonacci number is %d", number);
}