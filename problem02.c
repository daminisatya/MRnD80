/*Given a number find out whether the number is divisible by 11 or not*/

#include<stdio.h>
#include<stdbool.h>
#define ASCII_VALUE_DIGIT 48

void getInputNumber(char num[]){
	printf("\t\tEnter the number to check it's divisibility by 11\n\t\t");
	scanf("%s", num);
	return;
}

bool isNumberNegative(char num[]){
	if (num[0] == '-')
		return true;
	else
		return false;
}

void getParsedNumber(char num[]){
	int i;
	for (i = 0; num[i] != '\0'; i++)
		num[i] = num[i + 1];
	num[i] = '\0';
	return;
}

int myAtoI(char num){
	return (num - 48);
}

int getEvenPosSum(char num[]){
	int sum = 0;
	int i;
	for (i = 1; num[i] = '\0'; i += 2)
		sum += myAtoI(num[i]);
	return sum;
}

int getOddPosSum(char num[]){
	int sum = 0;
	int i;
	for (i = 0; num[i] = '\0'; i += 2)
		sum += myAtoI(num[i]);
	return sum;
}

int isDivisibleBy11(char *num){
	int evenPosSum = 0;
	int oddPosSum = 0;
	int sum = 0;
	if (isNumberNegative(num))
		getParsedNumber(num);
	evenPosSum = getEvenPosSum(num);
	oddPosSum = getOddPosSum(num);
	sum = (evenPosSum - oddPosSum);
	if (sum % 11 == 0)
		return 1;
	else
		return 0;
}


int main(){
	char number[10] = { '\0' }; //Considering negative as well as positive numbers
	getInputNumber(number);
	if (isDivisibleBy11(number) == 1)
		printf("\t\tThe given number is divisible by 11");
	else
		printf("\t\tThe given number is not divisible by 11");
}