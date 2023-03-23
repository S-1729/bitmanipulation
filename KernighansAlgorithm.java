import java.util.Scanner;
public class KernighansAlgorithm {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int c=0;
		while(n!=0)
		{
			int rsbm=n&-n;
			n-=rsbm;
			c++;
		}
		System.out.println("Count of Set bits : "+c);
	}

}
