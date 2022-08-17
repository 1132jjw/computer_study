#include <stdio.h>

int		b[10001];

int		main(void)
{
	int		N;
	int		a;
	int 	i;

	scanf("%d", &N);
	for(i = 0; i < N; i++)
	{
		scanf("%d", &a);
		b[a]++;
	}
	for(i = 1; i < 10001; i++)
	{
		while(b[i] != 0)
		{
			printf("%d\n", i);
			b[i]--;
		}
	}

	return (0);
}