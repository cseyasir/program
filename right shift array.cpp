#include<stdio.h>
int main()
{
	int A[5],i;
	printf("enter the elements in an araray");
	for(i=0;i<5;i++)
	{
		scanf("%d",&A[i]);
	}
	int temp=A[1];
	for(i=0;i<4;i++)
	{
		A[i]=A[i+1];
	}
	temp=A[5];
	for(i=0;i<5;i++)
	{
		printf("%d",A[i]);
	}
}
