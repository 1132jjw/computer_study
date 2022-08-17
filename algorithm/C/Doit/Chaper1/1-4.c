#include <stdio.h>

int		main(void)
{
	int		n, sum;

	sum = 0;
	scanf("%d", &n);
	for (int i = 0; i <= n; i++)
		sum += i;
	printf("sum : %d\n", sum);
	return (0);
}