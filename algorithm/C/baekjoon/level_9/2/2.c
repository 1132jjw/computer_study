#include <stdio.h>

int		main(void)
{
	int		N;
	int		i;
	int		j;
	int		flag;

	j = 0;
	flag = 0;
	scanf("%d", &N);
	i = N / 5;
	while (i > -1)
	{
		j = N / 3;
		while (j > -1)
		{
			if (i * 5 + j * 3 == N)
			{
				flag = 1;
				break ;
			}
			j--;
		}
		if (flag)
			break ;
		i--;
	}
	if (flag)
		printf("%d\n", i + j);
	else
		printf("-1\n");
	return (0);
}