#include <stdio.h>

int		sumof(const int a[], int n)
{
	int	index_in_a;
	int	sum;

	index_in_a = 0;
	sum = 0;
	while (index_in_a < n)
		sum += a[index_in_a++];
	return (sum);
}

int		main(void)
{
	int a[] = {1, 4, 1, 3, 2, 1, 0, -15, 15, 25, -1};

	printf("%d\n", sumof(a, 11));
	return (0);
}