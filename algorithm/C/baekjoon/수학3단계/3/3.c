#include <stdio.h>

int		main(void)
{
	int		N, i;

	scanf("%d", &N);
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
	return (0);
}