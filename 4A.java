import java.util.Scanner;

public class check {

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		if(n%2==1||n<4)System.out.print("NO");
		else System.out.print("YES");

	}

}
