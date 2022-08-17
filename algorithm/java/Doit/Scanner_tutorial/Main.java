import java.util.Scanner;

public class Main {
	public static void main(String[] args)
	{
		int[] a = new int[5];
		Scanner in = new Scanner(System.in);
		for (int i = 0; i < 5; i++)
		{
			int b = in.nextInt();
			a[i] = b;
			System.out.println(a[i]);
		}
	}
}