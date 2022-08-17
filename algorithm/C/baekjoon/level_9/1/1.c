#include <stdio.h>

int		main(void)
{
	long	A, B, C;
	int		total;

	scanf("%ld %ld %ld", &A, &B, &C);
	if (B >= C)
	{
		printf("-1\n");
		return (0);
	}
	else
		total = A / (C - B);
	printf("%d\n", total + 1);
	return (0);
}