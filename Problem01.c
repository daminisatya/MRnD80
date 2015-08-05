/*Given a number write a function to return the sum of all digits to the main program*/

#include<stdio.h>

void getInputNumber(char number[]){
	printf("\t\tEnter the number:\n\t\t");
	scanf("%s", number);
	return;
} 

void getParsedNumber(char number[], char dup[]){
	int len = 0;
	for (int index = 0; number[index] != '\0'; index++){
		if (number[index] > 47 && number[index] < 58){
			dup[len] = number[index];
			len++;
		}
	}
}

int myAtoI(char ele){
	return (ele - 48);
}

int getSumOfDigits(char *number){
	int sum = 0;
	char parsedNumber[10] = { '\0' };
	getParsedNumber(number, parsedNumber);
	for (int index = 0; parsedNumber[index] != '\0'; index++)
		sum += myAtoI(parsedNumber[index]);
	return sum;
}

int main() {
	char number[10] = { '\0' };//Number can be any of positive real number or negative real number
	int sum = 0;
	getInputNumber(number);
	//printf("%s", number);
	sum = getSumOfDigits(number);
	printf("\t\tThe sum of the given numner %s is %d", number, sum);
}
