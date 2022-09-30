#include<stdio.h>
int main()
{
	int m1,m2,m3,m4,total,avg;
	printf("Enter the marks in Python: ");
	scanf("%d", &m1);
	printf("\nEnter the marks in C Programming: ");
	scanf("%d", &m2);
	printf("\nEnter the marks in Mathematics: ");
	scanf("%d", &m3);
	printf("\nEnter the marks in Physics: ");
	scanf("%d", &m4);
	total=m1+m2+m3+m4;
	printf("\nThe Total is: %d", total);
	avg=total/4;
	printf("\nThe aggregate is: %d", avg);
	if(avg>=75)
	{
		printf("\nDistinction");
	}
	else if(avg>=60&&avg<75)
	{
		printf("\nFirst Class");
	}
	else if(avg>=50&&avg<60)
	{
		printf("\nSecond Class");
	}
	else if(avg>=40&&avg<50)
	{
		printf("\nThirsd Class");
	}
	else
	{
		printf("Fail");
	}
	return 0;
}
