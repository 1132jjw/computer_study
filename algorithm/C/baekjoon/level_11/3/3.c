#include <stdio.h>

char	map[2201][2201];

void	put_stars(int nb, int y, int x)
{
	if (nb == 1)
	{
		map[y][x] = '*';
		return ;
	}
	int		div = nb / 3;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (i == 1 && j == 1)
				;
			else
				put_stars(div, y+(i*div), x+(j*div));
		}
	}
}

int		main(void)
{
	int		N;

	scanf("%d", &N);

	put_stars(N, 0, 0);
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			printf("%c", map[i][j]);
		}
		printf("\n");
	}
	return (0);
}