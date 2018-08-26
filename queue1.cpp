//progamr for queue
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int q[5],front=-1,rare=-1;
void enqueue()
{
	if(front==-1)
	{
		front++;rare++;
	}
	else
	{
		printf("enter value ");
		scanf("%d",&q[rare]);
		rare++;
	}
	if(rare>4)
	{printf("queue is full");
	return;
	}
}
void dequeue()
{
	if(rare==-1)
     printf("queue is empty");
	 else
	 	printf("element removed is%d/n",q[front]);
	 	front++;
			
			}
			
void view()
{
	int i;
	if(rare==-1)
	printf("queue is empty ");
	else
	{
	{
	for(i=front;i<rare;i++)
    	printf("%d ",q[i]);	
	}	
}
}
main()
{
	int no;
	while(1)
	{
		printf("enter 1 to insert\nenter 2 to delete\nenter 3 to view \n");
		scanf("%d",&no);
		switch(no)
		{
			case 1:enqueue();
			break;
			case 2: dequeue();
			break;
			case 3:view();
		}
		
	}
	
	
}
