#include <stdio.h>

int		main(void)
{
	int		n;
	int		i;
	int		sum;

	scanf("%d", &n);
	sum = 0;
	for (i = 1; i < n; i++)
	{
		printf("%d + ", i);
		sum += i;
	}
	printf("%d = ", i);
	sum += i;
	printf("%d\n", sum);
	return (0);
}