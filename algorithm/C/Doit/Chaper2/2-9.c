#include <stdio.h>

int		main(void)
{
	int		n;
	int		i;
	int		flag;

	n = 1;
	while (n < 1000)
	{
		flag = 1;
		i = 3;
		if (n == 2)
			printf("%d\n", 2);
		while (i * i <= n)
		{
			if (n % i == 0)
			{	flag = 0;
				break ;
			}
			i += 2;
		}
		if (n < i * i && flag)
			printf("%d\n", n);
		n++;
	}
	return (0);
}