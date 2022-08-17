#include <stdio.h>

int		middle3(int a, int b, int c)
{
	int		middle;

	if (a < b)
	{
		if (a < c)
		{
			if (b < c)
				middle = b;
			else
				middle = c;
		}
		else
			middle = a;
	}
	else
	{
		if (a > c)
		{
			if (b > c)
				middle = b;
			else
				middle = c;
		}
		else
			middle = a;
	}
	return (middle);
}

int		main(void)
{
	int		a, b, c, middle;

	scanf("%d %d %d", &a, &b, &c);
	middle = middle3(a, b, c);
	printf("%d\n", middle);
	return (0);
}