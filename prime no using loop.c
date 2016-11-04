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
	int a,i,count=0;
	
	printf("Enter the first number\n");
	scanf("%d",&a);
	
	for(i=2;i<a;i++)
	{
		if(a%i==0)
		{
			count++;
		}
	}

	if (count<=0)
	{
		printf("%d is prime number\n",a);
	}
	else {
		printf("%d is not prime number\n",a);
	}
	return 0;
}