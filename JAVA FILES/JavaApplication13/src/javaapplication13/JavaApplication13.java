/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package javaapplication13;

import java.util.Scanner;


/**
 *
 * @author YOGESH KHATANA
 */
public class JavaApplication13 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        System.out.println("Enter radius of circle:");
        Scanner s=new Scanner(System.in); 
        double r=s.nextDouble();
        double area;
        area=3.14*r*r;
        System.out.println("Area is:"+area);
    }
    
}
