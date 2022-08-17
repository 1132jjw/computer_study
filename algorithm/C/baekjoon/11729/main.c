#include <stdio.h>
#include <math.h>

int	cnt = 0;
int	flag = 0;

void	hanoi_result(int N, int from, int temp, int to)
{
	if (N == 0)
		return ;
	else
	{
		hanoi_result(N - 1, from, to, temp);
		cnt++;
		hanoi_result(N - 1, temp, from, to);
	}
}

void	hanoi(int N, int from, int temp, int to)
{
	if (N == 0)
		return ;
	else
	{
		hanoi(N - 1, from, to, temp);
		printf("%d %d\n", from, to);
		hanoi(N - 1, temp, from, to);
	}
}

int		main(void)
{
	int N;

	scanf("%d", &N);
	hanoi_result(N, 1, 2, 3);
	printf("%d\n", cnt);
	hanoi(N, 1, 2, 3);
	return (0);
}