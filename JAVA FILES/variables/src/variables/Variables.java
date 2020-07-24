/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package variables;

import java.util.Scanner;

/**
 *
 * @author YOGESH KHATANA
 */
public class Variables {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
      int speed;
      boolean answer=true;
      double large_number=12.343;
      speed=10;
      System.out.println(speed);
      System.out.println(large_number);
      Scanner scanner1=new Scanner(System.in);
      Scanner scanner2=new Scanner(System.in);
      System.out.println("Enter a number:");
      double number=scanner1.nextInt();
      System.out.println("The number you entered is:");
      System.out.println(number);
      System.out.println("Enter a string:");
      String right=scanner2.nextLine();
      System.out.println("Entered string is:");
      System.out.println(right);
      
    }
    
}
