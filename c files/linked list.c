#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void create();
void display();
void insert_begin();
struct node{
	int data;
	struct node *next;
};
struct node *start=NULL;
void main()
{
	int choice;
	while(1)
	{
		printf("Singly linked list operations:\n\t");
		printf("\n1.create\n");
		printf("\n2.display\n");
		printf("\n3.insert at beginning");
		printf("\n4.exit");
		printf("Enter your choice:\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				{
					create();
					break;
				}
			case 2:
			{
				
				display();
				break;
				}	
			case 3:
			{
				insert_begin();
				break;
				
				}	
			case 4:
			{
				exit(0);
				}	
			default:
			printf("Wrong choice");
			break;	
		}
	}
	getch();
}
void create()
{
	struct node *ptr,*temp;
	temp=(struct node*)malloc(sizeof(struct node));
	if(temp==NULL)
	{
		printf("no memory available overflow");
		
	}
	
	else
	printf("Enter the data value for node:\n");
	scanf("%d",&temp->data);
	temp->next=NULL;
	if(start==NULL)
	{
	  start=temp;
	}
	else
	ptr=start;
	while(ptr->next!=NULL)
	{
		ptr=ptr->next;
	}
	ptr->next=temp;
	
}
void display()
{
	struct node *ptr;
	if(start==NULL)
	{
		printf("Linked list is empty\n");
		return;
	}
	else
	{
		ptr=start;
		printf("List of elements are:\n");
		while(ptr->next!=NULL)
		{
			printf("%d",ptr->data);
			ptr=ptr->next;
		}
		
	}
}
void insert_begin()
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	if(temp==NULL)
	{
	 printf("No memory avialable overflow");
	 return;
	 
    }
	else
	printf("Enter the data value for node:\n");
	scanf("%d",temp->data);
	temp->next=NULL;
	if(start==NULL)
	{
		start=temp;
	}
	else
	{
		temp->next=start;
	}
	start=temp;
}
