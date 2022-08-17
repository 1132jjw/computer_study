#include <stdio.h>
#include <stdlib.h>

int		IntCmp(const int *a, const int *b)
{
	return *a - *b;
}

int		main(void)
{
	int		N;
	int		tmp;
	int		cnt = 0;
	int		*arr;
	int		i = 0;

	scanf("%d", &N);
	tmp = N;
	while(tmp)
	{
		tmp /= 10;
		cnt++;
	}
	arr = malloc(sizeof(int) * cnt);
	while(N)
	{
		arr[i] = N % 10;
		N /= 10;
		i++;
	}
	qsort(arr, cnt, sizeof(int), (int(*)(const void *, const void *))IntCmp);
	while(i)
	{
		i--;
		printf("%d", arr[i]);
	}
	putchar('\n');
	return (0);
}