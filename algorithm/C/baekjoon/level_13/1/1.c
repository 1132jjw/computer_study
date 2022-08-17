#include <stdio.h>
#include <stdlib.h>

int		main(void)
{
	int		i, j, k, M, N, max;
	int		*arr;

	i = 0;
	j = 1;
	k = 2;
	max = 0;
	scanf("%d %d", &N, &M);
	arr = (int *)malloc(sizeof(int) * N);
	for (int x = 0; x < N; x++)
		scanf("%d", &arr[x]);
	while (i < N - 2)
	{
		while (j < N - 1)
		{
			while (k < N)
			{
				if (arr[i] + arr[j] + arr[k] > max &&
				arr[i] + arr[j] + arr[k] <= M)
					max = arr[i] + arr[j] + arr[k];
				k++;
			}
			j++;
			k = j + 1;
		}
		i++;
		j = i + 1;
		k = j + 1;
	}
	printf("%d\n", max);
	free(arr);
	return (0);
}