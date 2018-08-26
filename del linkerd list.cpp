#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
	int data;
	struct node*next,*prev;
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
void del()
{
	node*temp,*prev;
	temp=head;
	while(temp->next==NULL)
	{
		prev=temp;
		temp=temp->next;
	}
	prev->next=temp->next;
	free(temp);
}
int main()
{
	create();
	display();
	del();
}

