/*
Student Name: Pawan Joshi
Roll no:
Lab no:
Program: That takes theree inputs as integers from keyboard then print sum, the average, the product, the smallest and largest of these numbers.
Date: 25th october 2016
*/
#include<conio.h>
#include<stdio.h>
int main()
{
	
	int a,b,c,sum,average,product,smallest,largest;
	
	
	printf("Enter the first number:\n");
	scanf("%d",&a);
	
	printf("Enter the second number:\n");
	scanf("%d",&b);
	
	printf("Enter the third number:\n");
	scanf("%d",&c);
	
	sum=a+b+c;
	printf("The sum of three numbers=%d\n",sum);
	
	average=(a+b+c)/3;
	printf("The average of three numbers=%d\n",average);
	
	product=a*b*c;
	printf("The product of three numbers=%d\n",product);
	
	if (a>b && a>c)
	printf("The largest number is a\n");
	
	else  if (b>a && b>c)
	printf("The largest number is b\n");
	
	else
	printf("The smallest number is c\n");
	
	
	  if (a<b && a<c)
	printf("The smallest number is a\n");
	
	
	else if (b<a && b<c)
	printf("The smallest number is b\n");
	
	else
	printf("The smallest number is c\n");
	
	
	return 0;
	}
	