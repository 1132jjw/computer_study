#include <stdio.h>

int		factorial(int nb)
{
	if (nb == 1)
		return (1);
	return (nb * factorial(nb - 1));
}

int		main(void)
{
	int		N, result;

	scanf("%d", &N);
	if (N != 0)
	{
		result = factorial(N);
		printf("%d\n", result);
	}
	else
		printf("1\n");
	return (0);
}