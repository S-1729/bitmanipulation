import java.util.Scanner;
public class OneUniqueRestThrice {
	public static void main(String[] args) {

		int arr[]= {2,4,3,2,3,5,4,2,3,4};

		int r=Integer.MAX_VALUE,r1=0,r2=0;
		for(int i:arr)
		{
			int a=i&r;
			int b=i&r1;
			int c=i&r2;
			
			r=r&(~a);
			r1=r1|a;
			
			r1=r1&(~b);
			r2=r2|b;
			
			r2=r2&(~c);
			r=r|c;
		}
		System.out.println(r1);
	}
}
