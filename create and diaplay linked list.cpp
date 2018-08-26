#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
	int data;
	struct node*next;
};
struct node*head=NULL,*tail=NULL,*ptr;
void create()
{char opt;
do
{

	ptr=(struct node*)malloc(sizeof(struct node));
	if(head==NULL)
	{
		head=ptr;
		tail=ptr;
	}
	else
	{
		tail->next=ptr;
		ptr->next=NULL;
		tail=ptr;
	}
	printf("enter the data\n");
	scanf("%d",&ptr->data);
	printf("press y to continue\n");
	opt=getch();
}
while(opt=='y');
}
void display()
{
	struct node*x;
	x=head;
	printf("the list is");
	while(x!=NULL)
	{
		printf("%d",x->data);
		x=x->next;
	}
}
void search()
{
  struct node*temp;
	temp=head;
	int yo,count=0;
	printf("enter teh element to search");
	scanf("%d",&yo);
	
	while(temp!=NULL)
	{
		if(temp->data==yo)
		{
			temp=temp->next;
			++count;
			printf("element fouund in %d",count);
			
		}
		else
		{
			temp=temp->next;
			++count;
		}
		printf("element nt found in %d",count);
	}
}
int main()
{
	create();
	display();
	search();
}
