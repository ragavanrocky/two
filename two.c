
#include<stdio.h>
void main()
{
	int num;
	scanf("%d",&num);
	if(num%2==0)
	{
		printf("Even");
	}
	else if(num%2==1)
	{
		printf("Odd");
	}
	else
	{
		printf("Invalid");
	}
}
