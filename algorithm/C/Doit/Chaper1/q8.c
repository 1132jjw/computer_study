#include <stdio.h>

int		main(void)
{
	int		n;
	int		sum;

	scanf("%d", &n);
	sum = (n * (n + 1)) / 2;
	printf("sum : %d\n", sum);
	return (0);
}