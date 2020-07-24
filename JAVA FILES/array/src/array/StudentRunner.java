package array;

import java.math.BigDecimal;

public class StudentRunner {

	public static void main(String[] args) {
    
    Student student =new Student("Rahul",94,66,22);
    int number=student.getNoOfMarks();
	
	System.out.println("Number :"+number);
    int sum=student.sumOfMarks();
    System.out.println("Sum of Marks:"+sum);
    int maximum=student.MaximumMarks();
    System.out.println("Maximum Marks is:"+maximum);
    int minimum=student.getMinimumMarks();
    System.out.println("Minimum marks:"+minimum);
    BigDecimal Average=student.getAverage();
    System.out.println("Average Marks is:"+Average);
}
}
