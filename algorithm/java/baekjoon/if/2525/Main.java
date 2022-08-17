import java.util.Scanner;
public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int A = sc.nextInt();
		int B = sc.nextInt();
		int C = sc.nextInt();
		B += C;
		if (B >= 60)
		{
			int t = B / 60;
			int m = B % 60;
			A += t;
			A %= 24;
			System.out.println(String.valueOf(A) + ' ' + String.valueOf(m));
		}
		else
			System.out.println(String.valueOf(A) + ' ' + String.valueOf(B));
		sc.close();
	}
}