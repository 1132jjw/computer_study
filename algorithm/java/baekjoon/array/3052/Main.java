import java.util.Scanner;
public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int[] arr = new int[42];
		int res = 0;
		for (int i = 0; i < 10; i++) {
			int n = sc.nextInt();
			arr[n % 42]++;
		}
		for (int i = 0; i < 42; i++) {
			if (arr[i] != 0)
				res++;
		}
		System.out.println(res);
		sc.close();
	}
}