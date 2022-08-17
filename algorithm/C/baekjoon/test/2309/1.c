#include <stdio.h>
#include <stdlib.h>

int		IntCmp(const int x, const int y)
{
	return (x - y);
}

int		main(void)
{
	int		a[9];
	int		r[2];
	int		k;
	int		sum;
	int		i, j;

	for(i = 0; i < 9; i++)
	{
		scanf("%d", &a[i]);
		sum += a[i];
	}
	printf("Hi\n");
	for(i = 0; i < 8; i++)
	{
		for(j = i + 1; j < 9; j++)
		{
			if(sum - a[i] - a[j] == 100)
			{
				r[0] = a[i];
				r[1] = a[j];
				break ;
			}
		}
	}
	printf("r[%d] = %d\n", 0, r[0]);
	printf("r[%d] = %d\n", 1, r[1]);
	return (0);
}