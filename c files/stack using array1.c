#include<conio.h>
#include<stdio.h>
void push();
void pop();
void display();
int stack[100],choice,n,top=-1,i,x;
int main()
{
	
	printf("\nEnter the size of stack:");
	scanf("%d",&n);
	printf("\n\tSTACK OPERATIONS:\n\t");
	printf("\n\t1.push\n\t2.pop\n\t3.display\n\t4.exit");
	do{
		printf("Enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				{
					push();
					break;
				}
			case 2:
			    {
			    	pop();
			    	break;
				}	
			case 3:
			    {
			    	display();
			    	break;
			    }
			case 4:
			    {
			    	printf("Exit point\n\t");
			    }
				default:
				{
					printf("Enter a valid choice\n\t");
					   }	   
		}
	}while(choice!=4);
	return 0;
}
void push()
{
	if(top>=n-1)
     printf("Stack is overflow\n\t");
     else
     {
     	printf("Enter element to be pushed:\n\t");
     	scanf("%d",&x);
     	top++;
     	stack[top]=x;
	 }
}
void pop()
{
	if(top<=-1)
	printf("Stack is underflow\n\t");
	else
	{
		printf("popped element is %d",stack[top]);
		top--;
	}
}
void display()
{
	if(top>=0)
	{
		printf("The element in stack:\n\t");
		for(i=top;i>=0;i--)
		  printf("%d",stack[i]);
          printf("\nPress next choice");		
	}
	else
	printf("Stack is empty\n\t");
	
}
