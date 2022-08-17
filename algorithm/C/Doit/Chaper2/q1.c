#include <stdio.h>

int		minof(const int a[], int n)
{
	int		min;
	int		index_in_a;

	index_in_a = 0;
	min = a[0];
	while (index_in_a < n)
	{
		if (min > a[index_in_a])
			min = a[index_in_a];
		index_in_a++;
	}
	return (min);
}

int		main(void)
{
	int	a[] = {1, 5, 2, 7, 4, -1, -5, 2, 3};

	printf("%d\n", minof(a, 9));
	return (0);
}