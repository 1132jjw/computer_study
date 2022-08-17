#include <stdio.h>

int		sumof(int a, int b)
{
	int		sum;

	if (a < b)
		sum = (b * (b + 1)) / 2 - (a * (a - 1)) / 2;
	else
		sum = -1 * ((b * (b + 1)) / 2 - (a * (a - 1)) / 2);
	return (sum);
}

int		main(void)
{
	int		sum;

	sum = sumof(1, 3);
	printf("%d\n", sum);
	return (0);
}