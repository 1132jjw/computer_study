#include <stdio.h>
#include <stdlib.h>

int		main(void)
{
	int		N, min, index, tmp;
	scanf("%d", &N);
	int		arr[1000] = { 0, };
	for (int i = 0; i < N; i++)
		scanf("%d", &arr[i]);
	for (int i = 0; i < N; i++)
	{
		min = 9999;
		for (int j = i; j < N; j++)
		{
			if (arr[j] < min)
			{
				min = arr[j];
				index = j;
			}
		}
		tmp = arr[i];
		arr[i] = arr[index];
		arr[index] = tmp;
	}
	for (int i = 0; i < N; i++)
	{
		printf("%d\n", arr[i]);
	}
	return (0);
}