package com.yogesh;

public class WhileLoop {
    private int limit;
	public WhileLoop(int limit) {
		this.limit=limit;
	}



	public void PrintSquareUptoLimit() {
     int i = 1;
	  while(i*i<30)
	  {
		  System.out.print(i*i+" ");
		  i++;
	  }
	  System.out.println();
	}



	public void PrintCubeUptoLimit() {
       int i=1;
       while(i*i*i<30)
       {
    	   System.out.print(i*i*i+" ");
    	   i++;
       }
	}
	

}
