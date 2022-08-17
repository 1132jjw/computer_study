#include <stdio.h>

	while (N != 1)
	{
		i = 2;
		while (i <= N)
		{
			if (N % i == 0)
			{
				N /= i;
				printf("%d\n", i);
				break ;
			}
			i++;
		}
	}

int		main(void)
{
	int		a, b;

	scanf("%d %d", &a, &b);

	return (0);
}
