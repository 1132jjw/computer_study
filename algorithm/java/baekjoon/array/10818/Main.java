import java.util.Scanner;
public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int N = sc.nextInt();
		int a[];
		a = new int[N];
		int min = 9999999;
		int max = -9999999;
		for (int i = 0; i < N; i++) {
			a[i] = sc.nextInt();
			if (a[i] < min)
				min = a[i];
			if (a[i] > max)
				max = a[i];
		}
		System.out.printf("%d %d\n", min, max);
		sc.close();
	}
}