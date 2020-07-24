/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package calculator.java;

import java.util.Scanner;

/**
 *
 * @author YOGESH KHATANA
 */
public class CalculatorJava {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        double num1;
        double num2;
        int operator;
        System.out.println("CALCULATOR");
        System.out.println("1.Addition");
        System.out.println("2.Subtraction");
        System.out.println("3.Multiplication");
        System.out.println("4.Division");
       
        
       
        Scanner scanner1=new Scanner(System.in);
        System.out.println("Enter first number:");
        num1=scanner1.nextDouble();
        Scanner scanner2=new Scanner(System.in);
        System.out.println("Enter second number:"); 
        num2=scanner2.nextDouble();
        Scanner scanner3=new Scanner(System.in);
        System.out.println("Enter your operator between 1 to 4:");
        operator=scanner3.nextInt();
        if(operator==1)
        { System.out.println("Result is:");
              System.out.println(num1+num2);
        }      
        else if(operator==2)
        { System.out.println("Result is:");
          System.out.println(num1-num2);
        }
       else if(operator==3)
       { System.out.println("Result is:");
         System.out.println(num1*num2);
       }  
       if(operator==4)
       { System.out.println("Result is:");
         System.out.println(num1/num2);
       } 
        else
         System.out.println("Wrong choice!!!!");
                     
     }
    
}
