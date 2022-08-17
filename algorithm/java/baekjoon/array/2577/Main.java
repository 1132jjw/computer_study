import java.util.Scanner;
public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int[] arr;
		arr = new int[10];
		int A = sc.nextInt();
		int B = sc.nextInt();
		int C = sc.nextInt();
		int N = A * B * C;
		while (N != 0) {
			arr[N % 10]++;
			N = N / 10;
		}
		for (int i = 0; i < 10; i++)
			System.out.println(arr[i]);
		sc.close();
	}
}