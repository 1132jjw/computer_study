#include <stdio.h>

int		pow2(int nb)
{
	nb *= nb;
	return (nb);
}

int		main(void)
{
	int		x, y, z;
	while (1)
	{
		scanf("%d %d %d", &x, &y, &z);
		if (x == 0 && y == 0 && z == 0)
			break ;
		if (x >= y && x >= z)
		{
			if (pow2(x) == pow2(y) + pow2(z))
				printf("right\n");
			else
				printf("wrong\n");
		}
		else if (y >= x && y >= z)
		{
			if (pow2(y) == pow2(x) + pow2(z))
				printf("right\n");
			else
				printf("wrong\n");
		}
		else if (z >= x && z >= y)
		{
			if (pow2(z) == pow2(y) + pow2(x))
				printf("right\n");
			else
				printf("wrong\n");
		}
	}
	return (0);
}