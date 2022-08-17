import java.util.Scanner;
public class Main {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int N = in.nextInt();
		int M = in.nextInt();
		int[] A = new int[N];
		int[] B = new int[N];
		for (int i = 0; i < N; i++)
		{
			A[i] = in.nextInt();
			if (i > 0)
				B[i] += B[i - 1] + A[i];
			else if (i == 0)
				B[i] = A[i];
		}
		for (int i = 0; i < M; i++)
		{
			int x = in.nextInt() - 1;
			int y = in.nextInt() - 1;
			System.out.println(B[y] - B[x - 1]);
		}
		in.close();
	}
}