#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	struct node *next,*prev;
	int data;
};
struct node*head=NULL,*tail=NULL,*p1;
void create()
{
	struct node*ptr;char o;
	do 
	{
		ptr=(struct node*)malloc(sizeof(struct node));
		if(head==NULL)
		{
			head=ptr;
			tail=ptr;
			head->prev=NULL;
		}
		else
		{
			tail->next=ptr;
			ptr->prev=tail;
			tail=ptr;
		tail->next=NULL;
			
		}
		printf("enter the data\n");
		scanf("%d",&ptr->data);
	printf("press y to contnue\n");	
		o=getch();
	
	}
	while(o=='y');
}
void display()
{
	struct node*temp,*p;
	temp=head;
	printf("the list is ");
	while(temp!=NULL)
	{
		p=temp;
		printf("  %d",temp->data);
		temp=temp->next;
}
p1=p;

    printf("the reverse list is ");
 while(p!=NULL)
{
		printf(" %d",p->data);
		p=p->prev;
	}
}
	void insert()
{
	struct node *yas,*sdf;
	sdf=head;
	yas=(struct node*)malloc(sizeof(struct node));
	printf("\nenter data");
	scanf("%d",&yas->data);
	p1->next=yas;
	yas->next=NULL;
	while(sdf!=NULL)
	{
		printf("%d ",sdf->data);
		sdf=sdf->next;	
}
}
int main()
{
	create();
	display();
	insert();
}


