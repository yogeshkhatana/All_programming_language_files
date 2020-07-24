package com.yogesh;


import java.io.*;
import java.util.Scanner;
public class hi{
	 public static void main(String[] args) { 
       Scanner s=new Scanner(System.in);
       String InputValue;
       String name[]=new String[100];
       int number[]=new int[100];
       int n=s.nextInt();
       for(int i=0;i<n;i++)
       {
         InputValue=s.nextLine();
         String [] Value=InputValue.split(" ");
         name[i]=Value[0];
         number[i]=Integer.parseInt(Value[1]);
       }
       System.out.println("After sorting");
       for(int i=0;i<n;i++)
       {
         for(int j=i+1;j<n;j++)
         {
           if(number[i]>number[j])
           {
             int temp=number[i];
             String str=name[i];
             number[i]=number[j];
             name[i]=name[j];
             number[j]=temp;
             name[j]=str;
             
           }
         }
       }
       for(int i=0;i<n;i++)
       {
         System.out.println(name[i]+" "+number[i]);
                           

       }
     }
}