#include<stdio.h>
int main()
{
	int A[5],i,AR[5];
	printf("enter the elements in an araray");
	for(i=0;i<5;i++)
	{
		scanf("%d",&A[i]);
	}
	int temp=A[4];
	for(i=1;i<4;i++)
	{
		AR[i]=A[i-1];
	}
	AR[0]=temp;
	for(i=0;i<5;i++)
	{
		printf("%d",AR[i]);
	}
}
