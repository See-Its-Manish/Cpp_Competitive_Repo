import java.util.*;

class Rectangle{
	

public static void main(String args[]){

		Scanner s=new Scanner(System.in);
		double l;
		double b;

		System.out.print("Enter length and breadth: ");
		l=s.nextDouble();
		b=s.nextDouble();

		double area= l*b;

		if(area<200.0){

			System.out.println(area+"\nToo Small");
		}
		else if(area>1000){

			System.out.println(area+"\nToo Large");

		}
		else{
			System.out.println(area);
		}



	}


}