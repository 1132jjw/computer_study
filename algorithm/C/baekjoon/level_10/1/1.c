#include <stdio.h>

int		main(void)
{
	int		N, pn, cnt, j, flag;

	scanf("%d", &N);
	cnt = 0;
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &pn);
		j = 2;
		flag = 0;
		if (pn == 1)
			flag = 1;
		while (j <= pn / j)
		{
			if (pn % j == 0)
				flag = 1;
			j++;
		}
		if (!flag)
			cnt++;
	}
	printf("%d\n", cnt);
	return (0);
}