#include <stdio.h>

char	map[50][50];

int		lu_black(int x, int y)
{
	int	lub;

	lub = 0;
	for (int i = x; i < x + 8; i++)
	{
		for (int j = y; j < y + 8; j++)
		{
			if ((i + j) % 2 == 0)
			{
				if (map[i][j] == 'W')
					lub++;
			}
			else
			{
				if (map[i][j] == 'B')
					lub++;
			}
		}
	}
	return (lub);
}

int		lu_white(int x, int y)
{
	int	luw;

	luw = 0;
	for (int i = x; i < x + 8; i++)
	{
		for (int j = y; j < y + 8; j++)
		{
			if ((i + j) % 2 == 0)
			{
				if (map[i][j] == 'B')
					luw++;
			}
			else
			{
				if (map[i][j] == 'W')
					luw++;
			}
		}
	}
	return (luw);
}

int		main(void)
{
	int N, M;
	int	tmp1, tmp2;
	int	min;

	min = __INT32_MAX__;
	scanf("%d %d", &N, &M);
	for (int i = 0; i < N; i++)
		scanf("%s", map[i]);
	for (int x = 0; x + 8 <= N; x++)
	{
		for (int y = 0; y + 8 <= M; y++)
		{
			tmp1 = lu_black(x, y);
			tmp2 = lu_white(x, y);
			if (tmp1 > tmp2)
			{
				if (tmp2 < min)
					min = tmp2;
			}
			else
			{
				if (tmp1 < min)
					min = tmp1;
			}
		}
	}
	printf("%d\n", min);

	return (0);
}