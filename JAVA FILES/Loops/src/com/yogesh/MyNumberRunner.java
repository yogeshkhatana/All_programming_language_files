package com.yogesh;

public class MyNumberRunner {
public static void main(String[] args) {
	{
		MyNumber number=new MyNumber(5);
		boolean isPrime=number.isPrime();
		System.out.println("is Prime "+isPrime);
		int SumUpToN=number.SumUpToN();
		System.out.println("Sum upto N "+SumUpToN);
		int SumOfDivisor=number.SumOfDivisor();
		System.out.println("Sum OF Divisor: "+SumOfDivisor);
		number.PrintTriangle();
	}
}
}
