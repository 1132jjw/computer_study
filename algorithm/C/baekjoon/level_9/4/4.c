#include <stdio.h>

int		main(void)
{
	int		X;
	int		i;
	int		j;

	i = 0;
	j = 0;
	scanf("%d", &X);
	while (i < X)
	{
		j++;
		i += j;
	}
	if (j % 2 == 0)
		printf("%d/%d\n", j - (i - X), (i - X + 1));
	else
		printf("%d/%d\n", (i - X + 1), j - (i - X));
	return (0);
}