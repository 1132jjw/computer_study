#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int		check_vertical(int **map, int N)
{
	int		is_one;

	for (int i = 0; i < N; i++)
	{
		is_one = 0;
		for (int j = 0; j < N; j++)
		{
			if (map[i][j] == 1 && is_one == 0)
				is_one = 1;
			else if (map[i][j] == 1 && is_one == 1)
				return (1);
		}
	}
	return (0);
}

int		check_line(int **map, int N, int i, int j)
{
	int		temp_i;
	int		temp_j;

	temp_i = i;
	temp_j = j;
	while (i + 1 < N && j + 1 < N)
	{
		if (map[i + 1][j + 1] == 1)
			return (1);
		i++;
		j++;
	}
	i = temp_i;
	j = temp_j;
	while (i - 1 >= 0 && j - 1 >= 0)
	{
		if (map[i - 1][j - 1] == 1)
			return (1);
		i--;
		j--;
	}
	i = temp_i;
	j = temp_j;
	while (i - 1 >= 0 && j + 1 < N)
	{
		if (map[i - 1][j + 1] == 1)
			return (1);
		i--;
		j++;
	}
	i = temp_i;
	j = temp_j;
	while (i + 1 < N && j - 1 < N)
	{
		if (map[i + 1][j - 1] == 1)
			return (1);
		i++;
		j--;
	}
	return (0);
}

int		check_diagonal(int **map, int N)
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (map[i][j] == 1)
			{
				if (check_line(map, N, i, j) == 1)
					return (1);
			}
		}
	}
	return (0);
}

int		check(int **map, int N)
{
	if (check_vertical(map, N) || check_diagonal(map, N))
		return (1);
	else
		return (0);
}
int	g_cnt;
int		n_queens(int **map, int N, int i)
{
	int		cnt;

	cnt = 0;
	printf("i : %d\n", i);
	if (check(map, N) == 1)
		return (0);
	if (check(map, N) == 0 && i == N)
		g_cnt++;
	else if (i == N)
		return (0);
	for (int j = 0; j < N; j++)
	{
		map[i][j] = 1;
		cnt += n_queens(map, N, i++);
		map[i][j] = 0;
	}
	return (0);
}

int		main(void)
{
	int		N;
	int		**map;

	scanf("%d", &N);
	map = (int **)malloc(sizeof(int *) * N);
	for (int i = 0; i < N; i++)
	{
		map[i] = (int *)malloc(sizeof(int) * N);
		memset(map[i], 0, N);
	}
	printf("%d\n", n_queens(map, N, 0));
	for (int i = 0; i < N; i++)
		free(map[i]);
	free(map);
	return (0);
}