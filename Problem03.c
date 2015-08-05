/*Given 3 co-ordinates, write a function to find out the type of triangle*/

#include<stdio.h>
#include<stdbool.h>
#include<math.h>

void getInputCoOrdinates(int one[], int two[], int three[]){
	printf("Enter the first co-ordinates\n");
	scanf("%d, %d", &one[0], &one[1]);
	printf("Enter the second co-ordinates\n");
	scanf("%d, %d", &two[0], &two[1]);
	printf("Enter the third co-ordinates\n");
	scanf("%d, %d", &three[0], &three[1]);
	return;
}

int getLength(int point1[], int point2[]){
	int len = 0;
	len = sqrt(((point2[0] - point1[0]) * (point2[0] - point1[0])) + ((point2[1] - point1[1]) * (point2[1] - point1[1])));
	return len;
}

bool isEquilateral(int one[], int two[], int three[]){
	if ((getLength(one, two) == getLength(one, three)) && (getLength(one, three) == getLength(two, three)) && ((getLength(one, two) == getLength(two, three))))
		return true;
	else
		return false;
}

bool isIsosceles(int one[], int two[], int three[]){
	if ((getLength(one, two) == getLength(one, three)) || (getLength(one, three) == getLength(two, three)) || ((getLength(one, two) == getLength(two, three))))
		return true;
	else
		return false;
}

bool isScalene(int one[], int two[], int three[]){
	if ((getLength(one, two) != getLength(one, three)) && (getLength(one, three) != getLength(two, three)) && ((getLength(one, two) != getLength(two, three))))
		return true;
	else
		return false;
}

bool isRightAngeled(int one[], int two[], int three[]){
	if ((getLength(one, two) * getLength(one, two)) + (getLength(one, three) * getLength(one, three)) == ((getLength(two, three)* getLength(two, three))) || (getLength(one, two) * getLength(one, two)) + (getLength(two, three) * getLength(two, three)) == ((getLength(one, three)* getLength(one, three))) || (getLength(two, three) * getLength(two,three)) + (getLength(one, three) * getLength(one, three)) == ((getLength(one, two)* getLength(one, two))))
		return true;
	else
		return false;
}

int main(){
	int coOrdinateOne[2];
	int coOrdinateTwo[2];
	int coOrdinateThree[2];
	getInputCoOrdinates(coOrdinateOne, coOrdinateTwo, coOrdinateThree);
	if (isIsosceles(coOrdinateOne, coOrdinateTwo, coOrdinateThree) && isRightAngeled(coOrdinateOne, coOrdinateTwo, coOrdinateThree))
		printf("The triangle is a right angled isosceles triangle");
	if (isScalene(coOrdinateOne, coOrdinateTwo, coOrdinateThree) && isRightAngeled(coOrdinateOne, coOrdinateTwo, coOrdinateThree))
		printf("The triangle is a right angled Scalene triangle");
	if (isScalene(coOrdinateOne, coOrdinateTwo, coOrdinateThree))
		printf("The triangle is a Scalene triangle");
	if (isIsosceles(coOrdinateOne, coOrdinateTwo, coOrdinateThree))
		printf("The triangle is an Isosceles triangle");
	if (isEquilateral(coOrdinateOne, coOrdinateTwo, coOrdinateThree))
		printf("The triangle is an equilateral triangle");
}