package com.yogesh;

public class BiNumber {
    private int number1;
    private int number2;
	public BiNumber(int i, int j) {
	
		number1=i;
		number2=j;
		
	}
	public int add() {
		
		return number1+number2;
	}
	public int multiply() {
	
		return number1*number2;
	}
	public void doubleValue() {
		number1*=2;
		number2*=2;
		
		
	}
	public int getNumber1() {
		return number1;
	}
	
	public int getNumber2(){
		return number2;
	}
	
}
