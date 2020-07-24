package com.yogesh;
import java.util.Scanner;
public class dowhileloop {
	public static void main(String[] args) {
		for(int i=0;i<=10;i++)
		{
			if(i%2==0)
				continue;
			System.out.println("Odd number:"+i+" ");
		}
		Scanner s=new Scanner(System.in);
		int number=0;
		do {
			if(number!=0)
				{System.out.println("Cube is: "+number*number*number);
				}
				
            System.out.println("Enter a number:");
            number=s.nextInt();
		   }
		while(number>0);
		System.out.println("Thank you !!!!!");
		for(int i=0;i<=10;i++)
		{
			if(i%2!=0)
				continue;
			System.out.println("Even number:"+i+" ");
		}	
            
	}

}
