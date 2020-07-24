#include<stdio.h>
int stack[100],x,top,ch,i,n;
void push(void);
void pop(void);
void display(void);
int main()
{
	top=-1;
	printf("Enter the size of stack:\n");
	scanf("%d",&n);
	printf("Stack operations:");
	printf("1.push   2.pop    3.display    4.exit\n");
	do
	 {
	 	printf("Enter the choice\n");
	 	scanf("%d",&ch);
	 	switch(ch)
	 	 {
	 	 	case 1:
	 	 		push();
	 	 		break;
	 	 	case 2:
			    pop();
				break;
				
			case 3:
			    display();
				break;
			case 4:
			     printf("Exit point\n");
				 break;
			default:
			     printf("Wrong choice");
				 	 		
		  }
	 }while(ch!=4);
	 return 0;
}
      void push()
      {
      	if(top>=n-1)
      	 {
      	 	printf("Stack is overflow\n");
		 }
		 else
		 {
		   printf("Enter the value to be pushed");
		  scanf("%d",&x);
		  top++;
		  stack[top]=x;
	     }
	  }
	  void pop()
	   {
	   	if(top<=-1)
	   	printf("stack is underflow\n");
	   	else
	   	{
		   printf("The popped element is %d",stack[top]);
		   top--;
        }
	   }
	  void display()
	  {
	  	if(top>=0)
	  	{
	  		printf("The element in stack:\n");
	  		for(i=top;i>=0;i--)
	  		{
	  			printf("%d\n",stack[i]);
		    
			}
			printf("\npress next choice:\n");
		  }
		  else 
		  printf("Stack is empty\n");
	   } 
