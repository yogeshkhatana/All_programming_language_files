package com.yogesh;
import java.util.Scanner;

public class conditional {
	public static void main(String[] args) {
	
	    
		Scanner s = new Scanner(System.in);
		System.out.println("Enter number1:");
		float number1=s.nextFloat();
		System.out.println("Enter number2:");
		float number2=s.nextFloat();
	
	    System.out.println("Choose option from below:");
		System.out.println("1.Add\n2.Subtract\n3.Multiply\n4.Divide");
		System.out.println("Enter your Choice:");
		int choice=s.nextInt();
		
		{switch(choice)
			{
		case 1:System.out.println("Addition is:"+(number1+number2));
		break;
		case 2:System.out.println("Subtraction is:"+(number1-number2));
		break;
		case 3:System.out.println("Multiplication is:"+(number1*number2));
		break;
		case 4:System.out.println("Division is:"+(number1/number2));
		break;
		default:System.out.println("Wrong Choice!!!");
			}
			
			
	}
		
	  
		
		
		
	}

}

	