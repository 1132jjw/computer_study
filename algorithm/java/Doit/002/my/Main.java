import java.util.Scanner;
public class Main {
	public static int getMax(int[] a, int n) {
		int max = a[0];
		for (int i = 0; i < n; i++)
		{
			if (max < a[i])
				max = a[i];
		}
		return max;
	}
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		int[] a = new int[n];
		float[] b = new float[n];
		for (int i = 0; i < n; i++)
			a[i] = in.nextInt();
		int max = getMax(a, n);
		for (int i = 0; i < n; i++)
		{
			b[i] = (int)((float) a[i] / max * 100);
		}
		int sum = 0;
		for (int i = 0; i < n; i++)
			sum += b[i];
		float avg = sum/b.length;
		System.out.println(avg);
		in.close();
	}
}