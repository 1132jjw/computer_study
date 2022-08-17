import java.util.Scanner;
public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int N = sc.nextInt();
		int tmp;
		int i = 1;
		tmp = N / 10 + N % 10;
		tmp = N % 10 * 10 + tmp % 10;
		while (tmp != N) {
			int x;
			x = tmp / 10 + tmp % 10;
			tmp = (tmp % 10) * 10 + x % 10;
			i++;
		}
		System.out.println(i);
		sc.close();
	}
}