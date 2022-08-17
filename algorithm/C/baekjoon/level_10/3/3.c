#include <stdio.h>

int		is_prime_nb(int nb)
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
	int		M, N;

	scanf("%d %d", &M, &N);
	while (M <= N)
	{
		if (is_prime_nb(M))
			printf("%d\n", M);
		M++;
	}
	return (0);
}