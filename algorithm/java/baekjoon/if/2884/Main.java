import java.util.Scanner;
public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int H = sc.nextInt();
		int M = sc.nextInt();
		if (M >= 45)
		{
			M -= 45;
			System.out.println(String.valueOf(H) + ' ' + String.valueOf(M));
		}
		else
		{
			if (H > 0)
			{
				H -= 1;
				M = 15 + M;
				System.out.println(String.valueOf(H) + ' ' + String.valueOf(M));
			}
			else
			{
				H = 23;
				M = 15 + M;
				System.out.println(String.valueOf(H) + ' ' + String.valueOf(M));
			}
		}
		sc.close();
	}
}