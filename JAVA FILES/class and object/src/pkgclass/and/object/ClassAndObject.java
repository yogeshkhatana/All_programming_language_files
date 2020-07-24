/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pkgclass.and.object;

/**
 *
 * @author YOGESH KHATANA
 */
public class ClassAndObject {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        vehicles car=new vehicles();
        car.vehicle_name="BMW";
        car.no_of_tyres=4;
        car.top_speed=360;
        vehicles bike=new vehicles();
        bike.no_of_tyres=2;
        bike.vehicle_name="Hero Honda";
        car.getdetails();
        vehicles car1=new vehicles();
        vehicles car2=new vehicles();
        vehicles car3=new vehicles();
        vehicles car4=new vehicles();
        car.sayhi();
        car3.getdetails();
       
    }
}
     class vehicles
    {
        String vehicle_name;
        int no_of_tyres;
        double top_speed;
        void getdetails()
        {
            System.out.println("Car name is :");
            System.out.println(vehicle_name);
            System.out.println("No of tyres are :");
            System.out.println(no_of_tyres);
            
            System.out.println("Top speed :");
            System.out.println(top_speed);
            
            
            
        }
     static void sayhi()
        {
            System.out.println("Gujjar is back");
        }
        vehicles()
        {
            no_of_tyres=44;
            vehicle_name="JONGA";
            top_speed=560;
        }
    }


