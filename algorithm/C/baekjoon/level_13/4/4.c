#include <stdio.h>
#include <stdlib.h>

int		check_board(char **arr)
{
	int i, j;
	int min1, min2;
	int result;

	i = 0;
	j = 0;
	while (i < 8)
	{
		while (j < 8)
		{

		}
	}
	result = (min1 > min2) ? min1 : min2;
	return (result);
}

int		main(void)
{
	int		M, N, x, y, min1, min2;
	char	**arr;

	x = 0;
	y = 0;
	scanf("%d %d", M, N);
	min1 = M * N;
	min2 = M * N;
	arr = (char **)malloc(sizeof(char *) * N);
	for (int i = 0; i < N; i++)
	{
		arr[i] = (char *)malloc(sizeof(char) * M);
		for (int j = 0; j < M; j++)
			scanf("%c",arr[j][i]);
	}
	while (x + 8 <= M)
	{
		while (y + 8 <= N)
		{

			y++;
		}
		x++;
	}

	return (0);
}