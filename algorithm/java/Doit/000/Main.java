import java.util.Scanner;
public class Main {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		long[] arr = new long[n];
		for (int i = 0; i < n; i++)
		{
			arr[i] = in.nextInt();
			System.out.println(arr[i]);
		}
		in.close();
	}
}
