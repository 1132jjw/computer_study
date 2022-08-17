#include <stdio.h>

int		main(void)
{
	int		n, a, max, min;
	int		i = 0;
	int		arr[50];

	max = 0;
	min = 1000000;
	scanf("%d", &n);
	while (i < n)
	{
		scanf("%d ", &a);
		arr[i++] = a;
	}
	i = 0;
	while (i < n)
	{
		if (arr[i] < min)
			min = arr[i];
		if (arr[i] > max)
			max = arr[i];
		i++;
	}
	printf("%d\n", min * max);
	return (0);
}