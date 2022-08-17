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
	int		T, nb, i;

	scanf("%d", &T);
	for (int k = 0; k < T; k++)
	{
		scanf("%d", &nb);
		i = nb / 2;
		while (i > 1)
		{
			if (is_prime_nb(i) && is_prime_nb(nb - i))
				break ;
			i--;
		}
		printf("%d %d\n", i, nb - i);
	}
	return (0);
}