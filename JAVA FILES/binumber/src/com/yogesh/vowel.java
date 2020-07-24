package com.yogesh;

public class vowel {
	private char ch;
	


	public vowel(char ch)
	{
		this.ch=ch;

    }
	public boolean isvowel()
	{
	  if(ch=='a')
		  return true;
		
	  if(ch=='e')
		  return true;
		
	  if(ch=='i')
		  return true;
		
	  if(ch=='o')
		  return true;
		
	  if(ch=='u')
		  return true;
	  
	  if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
			  return true;
	  else
		  return false;
		
	}
	public boolean isDigit()
	{
		if(ch>=48 && ch<=57)
			return true;
		return false;
	}
	public boolean isAlphabet()
	{
		if(ch>=65 && ch<=90)
			return true;
		if(ch>=97 && ch<=122)
			return true;
		
		return false;
	}
	public boolean isConsonant()
	{
		if(isAlphabet() && !isvowel())
			return true;
		else
			return false;
			
	}
	public static void PrintLowerCase() {
		for(char ch='a';ch<='z';ch++)
			System.out.println(ch);
		
		
	}
	public static void PrintUpperCase() {
		for(char ch='A';ch<='Z';ch++)
        System.out.println(ch); 
	}

	}
	
