#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int		mt[8001];

int		IntCmp(const int *a, const int *b)
{
	return *a - *b;
}

int		main(void)
{
	int		N;
	int		*a;
	int		manyarr[2] = { 0, };
	int		manytime[2] = { 0, };
	int		i;
	int		max = -4000;
	int		min = 4000;
	double	total = 0;
	double	avg;

	scanf("%d", &N);
	a = malloc(sizeof(int) * N);
	for(i = 0; i < N; i++)
	{
		scanf("%d", &a[i]);
		if(a[i] > max)
			max = a[i];
		if(a[i] < min)
			min = a[i];
		mt[a[i] + 4000]++; 
	}
	qsort(a, N, sizeof(int), (int(*)(const void *, const void *))IntCmp);
	for(i = 0; i < N; i++)
	{
		total += a[i];
	}
	for(i = 8000; i > 0; i--)
	{
		if(manytime[0] <= mt[i])
		{
			manytime[1] = manytime[0];
			manytime[0] = mt[i];
			manyarr[1] = manyarr[0];
			manyarr[0] = i - 4000;
		}
	}
	avg = total / N;
	if(avg >= 0)
		printf("%.0f\n", floor(avg + 0.5));
	else
		printf("%.0f\n", floor(abs(avg - 0.5)) * -1);
	printf("%d\n", a[(N - 1) / 2]);
	if(manytime[1] == manytime[0])
		printf("%d\n", manyarr[1]);
	else
		printf("%d\n", manyarr[0]);
	printf("%d\n", max - min);
	return (0);
}