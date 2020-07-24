/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package student.record.management.system;

import java.util.Scanner;

/**
 *
 * @author YOGESH KHATANA
 */
public class StudentRecordManagementSystem {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
       int age;
       double marks;
       String name;
       System.out.println("Enter your name:");
       Scanner scanner1=new Scanner(System.in);
       name=scanner1.nextLine();
       System.out.println("Enter your age:");
       age=scanner1.nextInt();
       System.out.println("Enter your marks:");
       marks=scanner1.nextInt();
       
       
       System.out.println("Name is:");
       System.out.println(name);
       System.out.println("Marks:");
       System.out.println(marks);
       System.out.println("Age is:");
       System.out.println(age);
       
           
       
    }
    
}
