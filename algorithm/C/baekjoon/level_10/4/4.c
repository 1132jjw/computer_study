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
	int		n, i, cnt;

	while (1)
	{
		scanf("%d", &n);
		if (n == 0)
			break ;
		i = n + 1;
		cnt = 0;
		while (i <= 2 * n)
		{
			if (is_prime_nb(i))
				cnt++;
			i++;
		}
		printf("%d\n", cnt);
	}
	return (0);
}