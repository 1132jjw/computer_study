#include <stdio.h>

int		main(void)
{
	int		N, save, min, tmp;

	scanf("%d", &N);
	save = 0;
	min = 1000001;
	for (int i = 0; i < N; i++)
	{
		tmp = i;
		save = i;
		while (tmp)
		{
			save += tmp % 10;
			tmp /= 10;
		}
		if (save == N)
		{
			min = i;
			break ;
		}
	}
	if (min != 1000001)
		printf("%d\n", min);
	else
		printf("0\n");
	return (0);
}