import java.util.Scanner;
public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int T = sc.nextInt();
		for (int i = 0; i < T; i++) {
			String str = sc.next();
			char[] carr = str.toCharArray();
			int j = 0;
			while (carr[j] != \0) {
				System.out.println(carr[j]);
				j++;
			}
		}
		sc.close();
	}
}