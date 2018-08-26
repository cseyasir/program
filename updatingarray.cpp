//updating an array
#include<stdio.h>
int main()
{
	int A[5],i,r,loc;
	printf("enter the elements in an araray");
	for(i=0;i<5;i++)
	{
		scanf("%d",&A[i]);
	}
		printf("enter location");
	scanf("%d",&loc);
	printf("enter the number to inert");
	scanf("%d",&r);

	A[loc]=r;
	for(i=0;i<5;i++)
	{
	printf("%d",A[i]);	
	}
}
