import java.util.Scanner;
public class TwoUniqueRestTwice {

	public static void main(String[] args) {
		int arr[]= {2,5,3,2};//{36,50,24,56,36,24,42,50};

		int xor=0,x=0,y=0;
		for(int i:arr)
			xor^=i;

		int rsbm=xor&-xor;
		for(int i:arr)
		{
			if((i&rsbm)==0)
				x^=i;
			else
				y^=i;
		}
		System.out.println(x+"\n"+y);
	}

}
