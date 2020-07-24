/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package array.java;

/**
 *
 * @author YOGESH KHATANA
 */
public class ArrayJava {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
      int[] number={1,2,3,4,5};
      String[] name={"red","green","yellow","blue"};
      System.out.println(name[3]);
      System.out.println(number[2]);
      String[] fruits={"apple","Mango","Guava","Litchi"};            
      for(int i=0;i<fruits.length;i++)
      {
          System.out.println(fruits[i]);
          
      }
    }
    
}
