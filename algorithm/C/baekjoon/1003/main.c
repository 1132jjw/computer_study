#include <stdio.h>

int	DP0[41];
int	DP1[41];

int fibonacci(int n, int *cnt0, int *cnt1) {
    if (n == 0) {
        (*cnt0)++;
        return 0;
    } else if (n == 1) {
        (*cnt1)++;
        return 1;
    } else {
        return (fibonacci(n-1, cnt0, cnt1) + fibonacci(n-2, cnt0, cnt1));
    }
}

int	main(void)
{
	int	t;
	int	n;
	int	cnt0;
	int	cnt1;

	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		scanf("%d", &n);
		cnt0 = 0;
		cnt1 = 0;
		fibonacci(n, &cnt0, &cnt1);
		printf("%d %d\n", cnt0, cnt1);
	}
	return (0);
}