/*
Student Name: Pawan joshi
Roll no: 
Lab no:
Program: To print Factorial and any number provided by user using while loop.
Date: 26 october 2016
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	
int a,fact=1,n=1;
printf("Enter the factorial value\n");
scanf("%d",&a);
do
{
fact*=n;

n++;	
}
while(n<=a);
printf("The sum of factorial value =%d\n",fact);
return 0;
}