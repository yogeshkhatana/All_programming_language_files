#include<stdio.h>
#include<conio.h>
#include<stdlib.h
void create();
void display();
void insert_begin();
void insert_end();
void insert_pos();
void delete_begin();
void delete_end();
void delete_pos();
struct node
{
	int info;
	struct node *next;
};
  struct node *start=NULL;
  void main()
  {
  	int choice;
  	while(1)
  	{
  		printf("\nsingle linked list operations");
  		printf("\n1.create\n");
  		printf("\n2.display\n");
  		printf("\n3.insert at beginning\n");
  		printf("\n4.insert at end\n");
  		printf("\n5.insert at specified position\n");
  		printf("\n6.Delete from beginning\n");
  		printf("\n7.Delete from end\n");
  		printf("\n8.delete from specified position\n");
  		printf("\n9.Exit\n");
  		printf("Enter your choice");
  		scanf("%d",&choice);
  		switch(choice)
  		{
  			case 1:
  				create();
  				break;
  			case 2:
			    display();
				break;
			case 3:
			    insert_begin();
				break;
			case 4:
			    insert_end();
				break;
			case 5:
			    insert_pos();
				break;
			case 6:
			    delete_begin();
				break;
			case 7:
			    delete_end();
				break;
			case 8:
			    delete_pos();
				break;
			case 9:
			    exit(0);
				
			default:
			  printf("\nWrong choice");
			  break;
			  									
		  }
	  }
	  getch();
  } 
  void create()
  {
  	struct node *temp,*ptr;
  	temp=(struct node*)malloc(sizeof(struct node));
  	if(temp==NULL)
  	{
  		printf("\nno memory available overflow\n");
    }
    printf("Enter the data value for node\n");
    scanf("%d",&temp->info);
    temp->next=NULL;
    if(start==NULL)
    {
    	start=temp;
	}
	else
	{
	ptr=start;
		while(ptr->next!=NULL)
	{
		ptr=ptr->next;
	}
	ptr->next=temp;
  }
}
void display()
{
	stuct node *ptr;
	if(start==NULL)
	{
		printf("\nList is empty\n");
		return;
	}
	else
	{
		ptr=start;
		printf("\nlist elements are:\n");
		while(ptr!=NULL)
		{
			printf("%d\t",ptr->info);
			ptr=ptr->next;
			
		}
		
	}
}
void insert_begin()
{
	struct node *temp;
	temp=(struct node *)malloc(sizeof(struct node));
	if(temp==NULL)
	{
		printf("\nOut of memory overflow");
		return;
	}
	printf("Enter data value for node");
	scanf("%d",&temp->info);
	temp->next=NULL;
	if(start==NULL)
	{
		start=temp;
	}
	else 
	{
		temp->next=start;
		start=temp;
	}
}
void insert_end()
{
	struct node *temp,*ptr;
	temp=(struct node *)malloc(sizeof(struct node));
	if(temp==NULL)
	{
		printf("\nOut of memory\n");
		return;
	}
	printf("Enter data value for node\n");
	scanf("%d",&temp->info);
	temp->next=NULL;
	if(start==NULL)
	{
		start=temp;
	}
	else
	{
		ptr=start;
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
		ptr->next=temp;
	}
}
void insert_pos()
{
	struct node *ptr,*temp;
	int i,pos;
	temp=(struct node*)malloc(sizeof(struct node));
	if(temp==NULL)
	{
		printf("\nOut of memory");
		return;
	}
	printf("\nenter the position for new node to be inserted\n");
	scanf("%d",&pos);
	printf("\nEnter the data value for node");
	scanf("%d",&temp->info);
	temp->next=NULL;
	if(pos==0)
	{
		temp->next=start;
		start=temp;
	}
	else
	{
		for(i=0;ptr=start;i<pos-1;i++)
		{
			ptr=ptr->next;
			if(ptr==NULL)
			{
				printf("\nPosition not found");
				return;
			}
		}
		temp->next=ptr->next;
		ptr->next=temp;
	}
}
void delete_begin()
{
	struct node *ptr;
	if(start==NULL)
	{
		printf("\nList is empty");
		return;
	}
	else
	{
		ptr=start;
		start=start->next;
		printf("\nDeleted elements %d \n",ptr->info);
		free(ptr);
	}
}
void delete_end()
{
	struct node *temp,*ptr;
	if(start==NULL)
	{
		printf("\nList is empty");
		return;
	}
	else if(start->next==NULL)
      {
      	ptr=start;
      	start=NULL;
      	printf("\nDeleted element is %d\n",ptr->info);
      	free(ptr);
      	
	  }
	  else
	  {
	  	ptr=start;
	  	while(ptr->next!=NULL)
	  	{
	  		temp=ptr;
	  		ptr=ptr->next;
		  }
		  temp->next=NULL;
		  printf("\nDeleted element is %d",ptr->info);
		  free(ptr);
	  }
}
void delete_pos()
{
	int i,pos;
	struct node *temp,*ptr;
	if(start==NULL)
	{
		printf("\nList is empty");
		exit(0);
		
	}
	else
	{
		printf("\nEnter the position of node is to be deleted");
		scanf("%d",&pos);
		if(pos==0)
		{
		 ptr=start;
		 start=start->next;
		 printf("\nDeleted element is %d",ptr->info);
		 free(ptr);
		}
		else
		{
			ptr=start;
			for(i=0;i<pos;i++)
			 {
			 	temp=ptr;
			 	ptr=ptr->next;
			 	if(ptr==NULL)
			 	{
			 		printf("\nPosition not found");
			 		return;
			 		
				 }
			 }
			 temp->next=ptr->next;
			 printf("\nDeleted element is %d",ptr->info);
			 free(ptr);
		}
		
	}
}
