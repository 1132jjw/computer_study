import java.util.Scanner;
public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int N = sc.nextInt();
		double sum = 0;
		int[] arr = new int[N];
		int max = 0;
		for (int i = 0; i < N; i++) {
			arr[i] = sc.nextInt();
			sum += arr[i];
			if (arr[i] > max)
				max = arr[i];
		}
		System.out.println(sum / max * 100 / N);
		sc.close();
	}
}