//STACK
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int top=-1,stack[5],i;
void push()
{ if(top<4)
	{
	top++;
	printf("enter value ");
	scanf("%d",&stack[top])	;
}
}
void pop()
{
		
	printf("element deleted is%d",stack[top]);
	top--;
}
void view()
{
	if(top==-1)
	printf("stack is empty");
	else
	
{
	printf("stack is ");
	for(i=0;i<=top;i++)
	printf("%d",stack[i]);
}
    
}
main()
{
	int n;
	while(1)
	{
		printf("\nEnter 1 to push\nEnter 2 to pop\nEnter 3 to vieew\n");
		scanf("%d",&n);
		switch(n)
		{
			case 1:push();
			break;
			case 2:pop();
			break;
			case 3:view();
		}
	}
	
}
