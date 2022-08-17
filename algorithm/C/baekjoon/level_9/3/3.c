#include <stdio.h>

int		main(void)
{
	int		N;
	int		i;
	int		j;
	int		a;

	i = 0;
	j = 0;
	scanf("%d", &N);
	if (N == 1)
	{
		printf("1\n");
		return (0);
	}
	a = (N - 2) / 6;
	while (i <= a)
	{
		i += j;
		j++;
	}
	printf("%d\n", j);
	return (0);
}