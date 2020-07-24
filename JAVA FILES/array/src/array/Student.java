package array;

import java.math.BigDecimal;
import java.math.RoundingMode;

public class Student {
	private String name;
	private int[] marks;

	public Student(String name, int... marks) {
		this.name=name;
		this.marks=marks;
	}

	public int getNoOfMarks() {
		
		return marks.length;
		
	}

	public int sumOfMarks() {
		int sum=0;
		
		for(int mark:marks)
		{sum=sum+mark;
		
		}
		
		return sum;
	}

	public int MaximumMarks() {
		int maximum=Integer.MIN_VALUE;
		for(int mark:marks)
		if(mark>maximum)
			maximum=mark;
		
		return maximum;
	}

	public int getMinimumMarks() {
		int minimum=Integer.MAX_VALUE;
		for(int mark:marks)
		if(mark<minimum)
			minimum=mark;
		
		return minimum;
		
	}

	public BigDecimal getAverage() {
        int sum=sumOfMarks();
        int number=getNoOfMarks();
		return new BigDecimal(sum).divide(new BigDecimal(number),3,RoundingMode.UP);
	}
	

}
