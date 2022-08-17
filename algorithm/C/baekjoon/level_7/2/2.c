#include <stdio.h>

int		find_not_self_nb(int n)
{
	int i;
	int a;
	int self;

	a = 0;
	i = 1;
	while (i < n)
	{
		self = 0;
		self += i;
		a = i;
		while (a)
		{
			self += a % 10;
			a /= 10;
		}
		if (self == n)
			return (1);
		i++;
	}
	return (0);
}

void	d(int n)
{
	if (n > 10000)
		return ;
	if (find_not_self_nb(n))
		d(n + 1);
	else
	{
		printf("%d\n", n);
		d(n + 1);
	}
}

int		main(void)
{
	d(1);
	return (0);
}