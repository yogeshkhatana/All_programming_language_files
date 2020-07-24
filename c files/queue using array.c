#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#define max 50
int queue[max],val,i,choice,x,front=-1,rear=-1;
void insert();
void delete();
void peek();
void display();
void main()
{
	printf("\nQueue operations:\n\t");
	printf("1.insert\n2.delete\n3.peek\n4.display\n5.exit\n");
	do{
		printf("Enter your choice:\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				{
					insert();
					break;
				}
			case 2:
			
			{
				delete();
				break;
			}
			case 3:
			{
				display();
				break;
		    }
			case 4:
			{
				peek();
				break;
		    }	
				case 5:
				{
					exit(0);
			    }
				default:
				{
					printf("Wrong choice!!!!!\n");
					}	
				
		}
	}while(choice!=5);
	getch();
}
void insert()
{ 
	printf("Enter the value to be inserted:\n");
	scanf("%d",&val);
	if(rear==max-1)
	{ 
	printf("\noverflow\n");
	}
	else if(front==-1&&rear==-1)
	{
		front=rear=0;
	}
	else
	rear++;
	queue[rear]=val;
	}
	void delete()
	{
		if(front==-1)
		{
			
			printf("\nUnderflow");
		}
		x=queue[front];
		front++;
	    printf("deleted value is %d",x);

	}
	void peek()
	{
		if(front==-1)
		{
			printf("\nUnderflow queue is empty");
			return;
		}
		else
		return queue[front];
	}
	void display()
	{
		if(front==-1)
		{
			printf("Queue is empty");
		}
		else
		for(i=front;i<=rear;i++)
		{
			printf("%d",queue[i]);
		}
	}
