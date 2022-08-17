public class Main {
	public static void main(String[] args) {
		int a = 1;
		int sum;
		int[] arr1 = {1, 2, 3};
		int arr2[] = null;
		arr2 = new int[] {1, 2, 3};
		sum = add(new int[] {95, 90, 85});
		System.out.println(sum);
		System.out.println(args[0]);
		System.out.println(args[1]);
	}

	public static int add(int[] scores) {
		int sum = 0;
		for (int i = 0; i < 3; i++)
			sum += scores[i];
		return (sum);
	}
}