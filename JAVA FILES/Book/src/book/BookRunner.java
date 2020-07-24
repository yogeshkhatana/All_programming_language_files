package book;

public class BookRunner {

	public static void main(String[] args) {
		Book Art=new Book();
		Book caseCa=new Book();
		Book Booki=new Book(); 
		Art.read();
		caseCa.read();
		Art.noOfCopies=5;
		Booki.noOfCopies=22;
        System.out.println(Art.noOfCopies);
        Art.setPage(100);
        caseCa.setPage(0);
        System.out.println(Art.getPage());
        System.out.println(caseCa.getPage());
        Art.increasePage(20);
        Art.decreasePage(200);
        System.out.println(Art.getPage());
        
	}

}
