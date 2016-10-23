/*
Student Name: Pawan joshi
Roll no: 
Lab no:
Program:
Date: 23 octber 2016
*/
#include<stdio.h>
#include<conio.h>
int main ()
{
	int a,b,result;
	char operator;
	printf("Enter (+,-,*,/)");
	scanf("%c",&operator);
	

	printf("Enter the first number \n");
	scanf("%d",&a);
	printf("Enter the second number \n");
	scanf("%d",&b);
	

	switch(operator)
	{
		case '+':
		result=a+b;
		printf("The Sum of two numbers is: %d",result);
		break;
		
		case '-':
		result=a-b;
		printf("The difference of two numbers is: %d",result);
		break;
		
		case '*':
		result=a*b;
		printf("The multiplication of two numbers is: %d",result);
		break;
		
		case '/':
		result=a+b;
		printf("The division of two numbers is: %d",result);
		break;
		
		
		
	}

	getch();
		return 0;
}