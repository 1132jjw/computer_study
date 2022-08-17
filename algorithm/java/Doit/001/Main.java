import java.util.Scanner;
public class Main {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		int n = in.nextInt();
		int sum = 0;
		String a = in.next();
		char[] b = a.toCharArray();
		for (int i = 0; i < n; i++)
		{
			sum += b[i] - '0';
		}
		System.out.println(sum);
	}
}
/*
 * String -> 숫자형
 * String sNum = "1234";
 * int i = Integer.valueFf(sNum);
 * double d = Double.valueOf(sNum);
 * float f = Float.valueOf(sNum);
 * long l = Long.parseLong(sNum);
 * short s = Short.parseShort(sNum);
 * 
 * 숫자형 -> String
 * int i = 1234;
 * String s = String.valueof(i);
 * String s = Integer.toString(i);
 * float f = 1.23;
 * double d = 1.23;
 * String s = String.valueOf(f);
 * String s = String.valueOf(d);
 * String s = Float.toString(f);
 * String s = Double.toString(d);
 */