#include<stdio.h>
int main()
{
	int A[5],i,x;
	printf("ente the no of elements ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&A[i]);
	}
	printf("enter the number to seacrch");
	scanf("%d",&x);
	for(i=0;i<5;i++)
{
				if(A[i]==x)
		{
		
			printf("the element is found");
			break;}
		else
		{
		
		printf("element not found");
		break;
	}
}
}
