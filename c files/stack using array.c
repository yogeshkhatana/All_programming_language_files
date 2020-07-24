#include<stdio.h>
int stack[100],choice,n,top,x,i;
void push(void);
void pop(void);
void display(void);
int main()
{
	top=-1;
	printf("\nEnter the size of the stack[MAX=100]");
	scanf("%d",&n);
	printf("\n STACK OPERATIONS USING ARRAY");
	printf("\n\t-----------------------------");
	printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t4.EXIT\n\t");
	do
	{printf("\nEnter the choice:");
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
			 	printf("\n\tEXIT POINT");
			 	break;
	    	 }
			   	 	 
	    default:
		     {
		     	printf("\n\tPlease Enter a Valid choice");
			 }	   
	 }
	}
	while(choice!=4);
	return 0;
	}
	
	void push()
	{
		if(top>=n-1)
		{
			printf("\n\tSTACK is over flow");
		}
		else
		{
			printf("Enter a value to be pushed");
			scanf("%d",&x);
			top++;
		    stack[top]=x;
		}
	}
	void pop()
	{
		if(top<=-1)
		{
			printf("\n\t Stack is under flow");
		}
		else
		{
			printf("\n\tThe popped element is %d",stack[top]);
		}   top--;
	}
	
	void display()
	
	{
		 if(top>=0)
		 {
		 	printf("\n THE element in stack \n");
		 	for(i=top;i>=0;i--)
			 printf("\n%d",stack[i]);
		 	printf("\nPress next choice");		 }
		 else 
		 {
		 	printf("\nStack is empty");
		 }
	}
