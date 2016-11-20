#include<stdio.h>
#include<conio.h>
int main ()
{
	int area,length,breadth,height,perimeter,trapezium,operator;
	
		printf("Menu base program\n");
		printf("*******************************************\n");
		printf("***Enter 1 for area of rectangle\t***\n");
		printf("***Enter 2 for perimeter of rectangle\t***\n");
		printf("***Enter 3 for area of trapezium\t***\n");
		printf("***Enter 4 for exit\t\t\t***\n");
		printf("*******************************************");
		scanf("%d",&operator);
		printf("The number you have chosen is:%d\n",operator);
	switch(operator)
	{
		case 1:
			printf("Enter the length of rectangle:\n");
			scanf("%d",&length);
			printf("Enter the breadth of rectangle:\n");
			scanf("%d",&breadth);
			area=length*breadth;
			printf("Area of rectangle is:%d\n",area);
		break;
		
		case 2:
			printf("Enter the length of perimeter:\n");
			scanf("%d",&length);
			printf("Enter the breadth of breadth:\n");
			scanf("%d",&breadth);
			perimeter=2*(length+breadth);
			printf("perimeter of rectangle is:%d\n",perimeter);
		break;
		case 3:
			printf("Enter the length of trapezium:\n");
			scanf("%d",&length);
			printf("Enter the breadth of trapezium:\n");
			scanf("%d",&breadth);
			printf("Enter the heigth of trapezium:\n");
			scanf("%d",&height);
			trapezium=0.5*(length+breadth)*height;
			printf("The area of teapezium is:%d\n",trapezium);
		break;
		
		case 4:
			exit(0);
			break;
		
		defult:
		printf("Thank you for yor co-operation\n");
		
		
	}
		
	
	return 0;
}