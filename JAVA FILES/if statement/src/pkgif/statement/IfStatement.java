/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pkgif.statement;

import java.util.Scanner;

/**
 *
 * @author YOGESH KHATANA
 */
public class IfStatement {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        System.out.println("Enter a value:");
        Scanner scanner1=new Scanner(System.in);
        int a=scanner1.nextInt();
        if(a>5)
        
        {System.out.println("Number is greater than 5");
    
        }
        else
        {
            System.out.println("Number is not greater than 5!!");
        }
        System.out.print("Enter a number in  1 and 5:");
        int b=scanner1.nextInt();
        if(b==1)
            System.out.println("ONE!!");
        else if(b==2)
             System.out.println("TWO!!");
        else if(b==3)
             System.out.println("THREE!!");
        else if(b==4)
             System.out.println("FOUR!!");
        else if(b==5)
             System.out.println("FIVE!!");
        else
             System.out.println("    WRONG CHOICE!!!!!!");
    }
}