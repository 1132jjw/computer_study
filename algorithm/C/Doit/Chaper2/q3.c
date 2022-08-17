#include <stdio.h>

double	aveof(const int a[], int n)
{
	int		index_in_a;
	double	ave;

	index_in_a = 0;
	ave = 0;
	while (index_in_a < n)
		ave += a[index_in_a++];
	ave /= n;
	return (ave);
}

int		main(void)
{
	int a[] = {1, 4, 1, 3, 2, 1, 0, -15, 15, 25, -1};

	printf("%f\n", aveof(a, 11));
	return (0);
}