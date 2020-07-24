 package book;

public class Book{
	int noOfCopies;
	private int page;
	void read()
	{
		System.out.println("Book is readen");	
	    	
	}
	void setPage(int page)
	{
		if(page>0)
			this.page=page;
		else
			System.out.println("Error Go to hell");
	}
	int getPage()
	{
		return this.page;
	
		
	}
	void increasePage(int howmuch)
	{   
		setPage(this.page=this.page+howmuch);
	}
	void decreasePage(int howmuch)
	{
		setPage(this.page=this.page-howmuch);
	}
		
	
}
