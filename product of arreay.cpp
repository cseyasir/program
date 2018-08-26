#include<stdio.h>

main()

{
	int A[100],n,i,product;
	printf("enter the size of array [max 100]");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter elements");
		scanf("%d",&A[i]);
	}
	for(i=0;i<n;i++)
	product=A[i]*A[i];
	{
		printf("the elements in array are");
		for(i=0;i<n;i++)
		printf("%d\t",A[i]);
		printf("\n product=%d",product);

	}
}
