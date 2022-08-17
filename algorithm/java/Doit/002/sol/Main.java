import java.util.Scanner;
public class Main {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int N = in.nextInt();
		int A[] = new int[N];
		for (int i = 0; i < N; i++)
			A[i] = in.nextInt();
		int max = A[0];
		float sum = 0;
		for (int i = 0; i < N; i++)
		{
			if (max < A[i])
				max = A[i];
			sum += A[i];
		}
		System.out.println(sum * 100 / max / N);
	}
}