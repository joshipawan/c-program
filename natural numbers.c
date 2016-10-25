/*
Student Name: Pawan Joshi
Roll no:
Lab no:
Program: To print sum of natural numbers using do while loop 
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int i=0,sum,n;
	printf("Enter a natural number\n");
	scanf("%d",&n);
	do {
		sum+=i;
		printf("Sum of i numbers is:%d\n",sum);
		i++;
		}
	while(i<=n);
	return 0;
}