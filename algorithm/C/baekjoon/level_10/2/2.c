#include <stdio.h>

int		is_prime_number(int nb)
{
	int i;

	i = 2;
	if (nb == 1)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int		main(void)
{
	int		M, N, min, result;

	scanf("%d\n%d", &M, &N);
	result = 0;
	while (M <= N)
	{
		if (is_prime_number(N))
		{
			result += N;
			min = N;
		}
		N--;
	}
	if (result != 0)
		printf("%d\n%d\n", result, min);
	else
		printf("-1\n");
	return (0);
}