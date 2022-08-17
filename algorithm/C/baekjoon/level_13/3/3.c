#include <stdio.h>
#include <stdlib.h>

int		main(void)
{
	int		**arr, N, a, b;

	scanf("%d", &N);
	a = 0;
	b = 1;
	arr = (int **)malloc(sizeof(int *) * N);
	for (int i = 0; i < N; i++)
	{
		arr[i] = (int *)malloc(sizeof(int) * 3);
		scanf("%d %d", &arr[i][0], &arr[i][1]);
		arr[i][2] = 1;
	}
	while (a < N - 1)
	{
		while (b < N)
		{
			if (arr[a][0] > arr[b][0] && arr[a][1] > arr[b][1])
				arr[b][2]++;
			else if (arr[a][0] < arr[b][0] && arr[a][1] < arr[b][1])
				arr[a][2]++;
			b++;
		}
		a++;
		b = a + 1;
	}
	for (int i = 0; i < N; i++)
	{
		if (i == N - 1)
			printf("%d\n", arr[i][2]);
		else
			printf("%d ", arr[i][2]);
	}
	return (0);
}