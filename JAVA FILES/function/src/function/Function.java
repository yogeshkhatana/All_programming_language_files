/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package function;

/**
 *
 * @author YOGESH KHATANA
 */
public class Function {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        add(2,4);
        add(3,8);
        int result;
        result=sub(5,2);
    System.out.println("The Result is:");
    System.out.println(result);
}
public static void add(int x,int y)
{  
    System.out.println(x+y);
    
}
public static int sub(int x,int y)
{
   return(x-y);
}

}