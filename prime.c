/*
Student Name: Pawan joshi
Roll no: 11
Lab no: 
Program: To check weather the entered number is prime or not.
Date: 24th october 2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("Enter the  number:\n");
	scanf("%d",&n);
	if (n%1==0)
	printf("The given number is  prime\n");
	else if(n%3==0)
	printf("The given number is prime\n");
	return 0;
}