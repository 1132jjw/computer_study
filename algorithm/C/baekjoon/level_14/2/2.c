#include <stdio.h>
#include <stdlib.h>

int		IntCmp(const int *a, const int *b)
{
	return *a - *b;
}

int		main(void)
{
	int N;
	int arr[1000000] = { 0, };
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &arr[i]);
	}
	qsort(arr, N, sizeof(int), (int(*)(const void *, const void *))IntCmp);
	for (int i = 0; i < N; i++)
		printf("%d\n", arr[i]);
	return (0);
}