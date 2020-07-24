package com.yogesh;

import java.util.Scanner;

public class tech {
	public static void main(String[] args) {
		Scanner s=new Scanner(System.in);
		int count=0;
		
		System.out.println("Enter Number:");
		int number = s.nextInt();
		int sum=0;
		int n=number;
		int x=n;
		while(number!=0)
		{
			number=number/10;
			count++;
		}
		System.out.println("No. of digits in a number:"+count);
		

	{while(n!=0||sum>9)
		{   if(n==0)
		{   
			System.out.println("Sum is : "+sum);
			n=sum;
			sum=0;
		}
			x=n%10;
		    sum=sum+x;
			n=n/10;
			
	    }
		
		System.out.println("Sum is:"+sum);

		
	}
	}
}
