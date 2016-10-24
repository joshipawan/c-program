/*
Student Name: Pawan joshi
Roll no: 11
Lab no: 
Program: To take two input/output from user and print largest and smallest numbers using terinary operator.
Date: 24th october 2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,largest,smallest;
	printf("Enter the first number:\n");
	scanf("%d",&a);
	printf("Enter the second number:\n");
	scanf("%d",&b);
	largest=(a>b)?a:b;
	smallest=(a<b)?a:b;
	printf("The largest number=%d\n",largest);
	printf("The smallest number=%d\n",smallest);
	return 0;
}
