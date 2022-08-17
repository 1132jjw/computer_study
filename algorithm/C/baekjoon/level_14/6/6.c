#include <stdio.h>
#include <stdlib.h>

int		main(void)
{
	int		N;
	int		**arr;
	int		i;

	scanf("%d", &N);
	arr = malloc(sizeof(int *) * N);
	for(i = 0; i < N; i++)
		arr[i] = malloc(sizeof(int) * 2);
	
	return (0);
}