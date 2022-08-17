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
	int		T, nb, i, j, min;
	int		i_min, j_min;

	scanf("%d", &T);
	for (int i = 0; i < T; i++)
	{
		scanf("%d", &nb);
		i = nb / 2;
		min = nb;
		while (i > 1)
		{
			j = nb / 2;
			while (j < nb)
			{
				if (i + j == nb && is_prime_nb(i) && is_prime_nb(j))
				{
					if (min > j - i)
					{
						min = j - i;
						i_min = i;
						j_min = j;
					}
				}
				j++;
			}
			i--;
		}
		printf("%d %d\n", i_min, j_min);
	}
	return (0);
}